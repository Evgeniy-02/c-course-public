#!/bin/bash
cd "$(dirname "$0")" || exit 1
mkdir -p build

CFLAGS="-std=c11 -Wall -Wextra -pedantic -Werror"
ok_count=0
fail_count=0

for source in *.c; do
    name="${source%.c}"
    if ! gcc $CFLAGS -o "build/$name" "$source"; then
        echo "FAIL  $source (compile error)"
        fail_count=$((fail_count + 1))
        continue
    fi

    expected="expected_$name.txt"
    if [ ! -f "$expected" ]; then
        echo "OK    $source (compiled, no expected output - interactive)"
        ok_count=$((ok_count + 1))
        continue
    fi

    if "./build/$name" | diff -q - "$expected" > /dev/null; then
        echo "OK    $source"
        ok_count=$((ok_count + 1))
    else
        echo "FAIL  $source (output differs from $expected)"
        "./build/$name" | diff - "$expected"
        fail_count=$((fail_count + 1))
    fi
done

echo
echo "Summary: $ok_count OK, $fail_count FAIL"
if [ "$fail_count" -ne 0 ]; then
    exit 1
fi
