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
int _putchar(char sp_ch);
int _putstr(char *str, int len);
void _putInt(unsigned int num, int *pCount);
#endif
