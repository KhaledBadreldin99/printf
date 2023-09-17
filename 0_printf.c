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

	va_start(args, format);

	if (!format)
		return (-1);
	while (*format)
	{
		if (*format != '%')
			count += _putchar(*format);
		else if (*(format + 1) == '%')
		{
			count += _putchar('%');
			format++;
		}
		else if (*(format + 1) == 'c')
		{
			count += _putchar(va_arg(args, int));
			format++;
		}
		else if (*(format + 1) == 's')
		{
			*str = va_arg(args, char *);
			str = (str == NULL) ? "(null)" : str;
			count += _putchar(str);
			format++;
		}
		else
			count += _putchar(*format);
		format++;
	}
	va_end(args);
	return (count);
}
