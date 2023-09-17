#include "main.h"

/**
 * _putInt - function that print an int
 * @num: the integer we want to print
 * @pCount: pointer to the counter to know num of int being printed
 * Return: Length of the numbers in decimal
*/
void _putInt(unsigned int num, int *pCount)
{
	char *p_buff;
	int size;

	p_buff = itoa(va_arg(list, int), 10);

	size = print((p_buff != NULL) ? p_buff : "NULL");

	return (size);
}
