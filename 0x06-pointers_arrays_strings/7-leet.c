#include "main.h"

/**
 * leet - Encode a string into 1337
 * @s: string
 * Return: string
 */

char *leet(char *s)
{
int a, b, c;
char letter[] = "aAeEoOtTlL";
char new[] = "4433007711";

a = 0;
while (s[a] != '\0')
{
	b = 0;
	c = 0;
	while (letter[b] != '\0')
	{
		if (s[a] == letter[b])
		{
			c = b;
			s[a] = new[c];
		}
		b++;
	}
	a++;
}
return (s);
}
