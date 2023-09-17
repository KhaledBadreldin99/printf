#include "main.h"
/**
 * _printf - ower own printf function
 * @format: the format string
 * Return: number of characters printed (excluding null)
*/
int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;
	char *str;
	char c;
	int num;

	va_start(args, format);

	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	while (*format)
	{
		if (*format != '%')
			count += _putchar(*format);
		else if (*(format + 1) == '%')
			count += _putchar('%'), format++;
		else if (*(format + 1) == 'c')
		{
			c = va_arg(args, int);
			count += _putchar(c), format++;
		}
		else if (*(format + 1) == 's')
		{
			str = va_arg(args, char *);
			if (str == NULL)
				str = "(null)";
			count += _putstr(str, _strlen(str)), format++;
		}
		else if (*(format + 1) == 'd' || *(format + 1) == 'i')
		{
			num = va_arg(args, int);
			_putInt((unsigned int)num, &count), format++;
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
