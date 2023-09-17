#include "main.h"
/**
 * _printf - custom printf function.
 * @format: the format string
 *
 * Return: the number of characters printed (excluding null byte)
*/
int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;
	int num;

	va_start(args, format);
	if (!format)
		return (-1);
	while (*format)
	{
		if (*format != '%')
		{
			count += _putchar(*format);
		}
		else if (*(format + 1) == '%')
		{
			count += _putchar('%');
			format++;
		}
		else if (*(format + 1) == 'd' || *(format + 1) == 'i')
		{
			num = va_arg(args, int);
			_putInt((unsigned int)num, &count);
			format++;
		}
		else
		{
			count += _putchar(*format);
		}
		format++;
	}
	va_end(args);
	return (count);
}
