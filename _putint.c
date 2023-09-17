#include "main.h"
/**
 * _putInt - function print int
 * @num: int to print
 * @pCount: pointer to the counter
 */
void _putInt(unsigned int num, int *pCount)
{
	/* handle -ve numbers*/
	if ((int)num < 0)
	{
		_putchar('-');
		*pCount += 1;
		num *= -1;
	}
	/* number more than 1 digit*/
	if (num / 10)
	{
		_putInt(num / 10, pCount);
	}
	_putchar(num % 10 + '0');
	*pCount += 1;
}
