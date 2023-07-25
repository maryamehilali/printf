#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>

int _printf(const char *format, ...);
int _putchar(char c);
int handle_string(char *str);
int handle_integer(int num);
int digit_count(int);
int convert_binary(int);

#endif
