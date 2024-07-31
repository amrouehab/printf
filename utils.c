#include "main.h"

/**
 * _putchar - Writes a character to stdout
 * @c: The character to print
 * Return: On success 1, On error -1
 */
int _putchar(char c)
{
	return write(1, &c, 1);
}

/**
 * _puts - Writes a string to stdout
 * @str: The string to print
 * Return: Number of characters printed
 */
int _puts(char *str)
{
	int count = 0;

	while (*str) {
		_putchar(*str++);
		count++;
	}

	return count;
}

/**
 * _print_int - Writes an integer to stdout
 * @n: The integer to print
 * Return: Number of characters printed
 */
int _print_int(int n)
{
	int count = 0;
	unsigned int num;

	if (n < 0) {
		_putchar('-');
		count++;
		num = -n;
	} else {
		num = n;
	}

	if (num / 10) {
		count += _print_int(num / 10);
	}

	_putchar((num % 10) + '0');
	count++;

	return count;
}

