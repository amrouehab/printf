#include "main.h"

/**
 * _printf - Custom printf function
 * @format: format string containing the characters and the specifiers
 * Return: Number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list args;
	int printed_chars = 0;
	const char *p;

	va_start(args, format);

	for (p = format; *p != '\0'; p++) {
		if (*p == '%') {
			p++;
			switch (*p) {
				case 'c':
					printed_chars += _putchar(va_arg(args, int));
					break;
				case 's':
					printed_chars += _puts(va_arg(args, char *));
					break;
				case '%':
					printed_chars += _putchar('%');
					break;
				case 'd':
				case 'i':
					printed_chars += _print_int(va_arg(args, int));
					break;
				default:
					printed_chars += _putchar('%');
					printed_chars += _putchar(*p);
					break;
			}
		} else {
			printed_chars += _putchar(*p);
		}
	}

	va_end(args);
	return printed_chars;
}

