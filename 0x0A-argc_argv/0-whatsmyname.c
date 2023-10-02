#include <stdio.h>

/**
 * main - prints name folowed by a new line.
 * @argc: type int argument
 * @argv: type char argument of string.
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void) argc; /* Ignore argc */

	printf("%s\n", argv[0]);

	return (0);
}
