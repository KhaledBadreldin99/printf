#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * struct sp_char - for the special character
 * @ch: symbole of the special character
 * @fun: pointer to function
*/
typedef struct sp_char
{
	char ch;
	int (*fun)(va_list, int *);
}
spChar;

/**
 * struct signs - for the special character
 * @ch: symbole of the signs
 * @fun: pointer to print sign
*/
typedef struct signs
{
	char ch;
	void (*fun)(int, char, int, va_list, int *);
}
sign;

int _strlen(char *s);
int _printf(const char *format, ...);
int spIndex(char ch, struct signs *p);
int signIndex(char ch, struct signs *p);
int _putchar(char sp_ch);
int _putstr(char *str, int len);
void _putInt(unsigned int num, int *pCount);
int print_str(va_list pa, int *pCount);
int print_ch(va_list pa, int *pCount);
int print_int(va_list pa, int *pCount);
int print_bi(va_list pa, int *pCount);
int print_rev(va_list pa, int *pCount);
int print_unsigned(va_list pa, int *pCount);
int print_octal(va_list pa, int *pCount);
int print_lowerhex(va_list pa, int *pCount);
int print_upperhex(va_list pa, int *pCount);
int print_nonch(va_list pa, int *pCount);
int print_rot13(va_list pa, int *pCount);
int print_addr(va_list pa, int *pCount);
void positive_sign(int flag, char ch, int j, va_list ap, int *pCount);
void space_sign(int flag, char ch, int j, va_list ap, int *pCount);
void window_sign(int flag, char ch, int j, va_list ap, int *pCount);

#endif
