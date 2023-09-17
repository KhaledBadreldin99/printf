#include "main.h"
#include <unistd.h>
/**
 * _printf - our own printf function.
 * @format: The format string.
 * Return: The number of characters printed (excluding the null byte).
*/
int _printf(const char *format, ...);
{
	va_list args;
	int printed_chars = 0;

	va_start(args, format);

	while (*format)
	{
		if (*format != '%')
		{
			write(1, format, 1);
			printed_chars++;
		}
		else if (*(++format))
		{
			if (*format == 'c')
				printed_chars++, write(1, (char[]){va_arg(args, int)}, 1);
			else if (*format == 's')
			{
				char *str = va_arg(args, char *) ?: "(null)";

				for (; *str; str++, printed_chars++)
					write(1, str, 1);
			}
			else if (*format == '%')
				printed_chars++, write(1, "%", 1);
			else
				printed_chars++, write(1, "%", 1), write(1, format, 1);
		}
		format++;
	}
	va_end(args);
	return (printed_chars);
}
