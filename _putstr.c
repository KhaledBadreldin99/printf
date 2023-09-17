#include "main.h"
/**
 * _putstr - print a string to stdout
 * @str: the string to print
 * @len: length of the string
 * Return: the number of characters printed
 */
int _putstr(char *str, int len)
{
	return (write(1, str, len));
}
