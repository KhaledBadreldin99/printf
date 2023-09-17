#include "main.h"

/**
 * _putInt - function that print an int
 * @num: the integer we want to print
 * @pCount: pointer to the counter to know num of int being printed
*/
void _putInt(unsigned int num, int *pCount)
{
	if ((int)num < 0)
	{
		_putchar('-');
		*pCount += 1;
		num *= -1;
	}

	if (num / 10)
		_putInt(num / 10, pCount);

	_putchar(num % 10 + '0');
	*pCount += 1;
}
