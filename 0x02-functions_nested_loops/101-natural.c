#include <stdio.h>
/**
 * main - main void
 *
 * Return: 0 on success
 */
int main(void)
{
	int a;
	int sum;

		for (a = 0; a < 1024; a++)
		{
			if ((a % 3 == 0) || (a % 5 == 0))
				sum = sum + a;
		}
		printf("%d\n", sum);
		return (0);
}
