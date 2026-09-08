# Курс C для будущих программистов дронов

Прошивки полётных контроллеров (Betaflight, INAV, ArduPilot), Arduino, ESP32 и
STM32 написаны на C. Здесь конспекты уроков, инструкции по установке и папка
для домашних заданий.

## Уроки

- [Урок 1. Первая программа на C](lessons/01_first_program/students.md)

## Установка

- [Первые уроки без установки: onlinegdb.com](setup/onlinegdb.md)
- [Windows: gcc и Eclipse](setup/windows.md)
- [Linux Mint: gcc и Eclipse](setup/linux-mint.md)
- [Git: как сдавать домашку](setup/git-cheatsheet.md)

## Заготовки к урокам

В папке каждого урока лежит `code/` с программами `// TODO`, которые
дописываем на уроке. Пути латиницей, чтобы компилятор на Windows не спотыкался.

## Домашние задания

Папка [students](students/README.md): у каждого своя подпапка по имени латиницей.

## Как компилировать

```
gcc -std=c11 -Wall -Wextra -pedantic -o prog prog.c && ./prog
```

На Windows: `gcc -std=c11 -Wall -Wextra -pedantic -o prog.exe prog.c` и затем `prog.exe`.

## Лицензия

Материалы распространяются по лицензии [MIT](LICENSE): можно свободно
использовать и делиться, сохраняя указание автора, Evgeniy Lysenko.
