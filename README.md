# ft_printf

## What it is
This project consists of a basic copy of libc's printf.

Succeeded with 100%

## Skills
- Algorithms & AI
- Rigor
- Unix logic


## Features
It only handles basic format tags: c, s, p, d, i, u, x, X and %. Any other tag will be outputted as is. (Flags too!)
### Examples:
```c
ft_printf("%c", 'a');       --> 'a'
ft_printf("%p", -1);        --> '0xffffffff'
ft_printf("%-10s", "Hello") --> '%-10s'
ft_printf("%f");            --> '%f'
```

## How to use it
Requisites:
```shell
clang
```

Clone the repository and run:
```shell
make
```
The library is generated on the file libftprintf.a.

## Recommended suite of tests
- [ft_printf_tester - Paulo Santana](https://github.com/paulo-santana/ft_printf_tester)

## Found any bug?
Feel free to contact me or create an issue!

###### Licensed under GPLv3
