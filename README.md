# Курс C для будущих программистов дронов

Прошивки полётных контроллеров (Betaflight, INAV, ArduPilot), Arduino, ESP32 и STM32 написаны на C. Здесь конспекты уроков, инструкции по установке и каталог для домашних заданий.

## Уроки

- [Урок 1. Первая программа на C](lessons/01_first_program/students.md)
- [Урок 2. Типы и байты](lessons/02_types_and_bytes/students.md)
- [Урок 3. Условия](lessons/03_conditions/students.md)
- [Урок 4. Циклы](lessons/04_loops/students.md)
- [Урок 5. Функции](lessons/05_functions/students.md)
- [Урок 6. Массивы](lessons/06_arrays/students.md)
- [Урок 7. Строки](lessons/07_strings/students.md)
- [Урок 8. Биты](lessons/08_bits/students.md)
- [Урок 9. Указатели](lessons/09_pointers/students.md)
- [Урок 10. Структуры](lessons/10_structs/students.md)

## Установка

- [Первые уроки без установки: onlinegdb.com](setup/onlinegdb.md)
- [Windows: gcc и Eclipse](setup/windows.md)
- [Linux Mint: gcc и Eclipse](setup/linux-mint.md)
- [Git: как сдавать домашнее задание](setup/git-cheatsheet.md)

## Заготовки к урокам

В каталоге каждого урока лежит `code/` с программами `// TODO`, которые дописываем на уроке. Пути латиницей, чтобы компилятор на Windows не спотыкался.

## Домашние задания

У каждого ученика свой закрытый репозиторий, решения складываются в каталог урока `lessonNN/`. Как отправить — в [setup/git-cheatsheet.md](setup/git-cheatsheet.md).

## Как компилировать

```
gcc -std=c11 -Wall -Wextra -pedantic -o prog prog.c && ./prog
```

На Windows: `gcc -std=c11 -Wall -Wextra -pedantic -o prog.exe prog.c` и затем `prog.exe`.

## Лицензия

Материалы распространяются по лицензии [MIT](LICENSE): можно свободно использовать и делиться, сохраняя указание автора, Evgeniy Lysenko.
