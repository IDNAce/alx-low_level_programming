#include <stdio.h>
/**
 * main - main function
 *
 * Return: 0 if successful
 */
int main(void)
{
	int x;

	for (x = 0; x <= 9; x++)
		if (x != 9)
	{
		putchar(x + '0');
		putchar(',');
		putchar(' ');
	}

		else
			putchar(x + '0');
	return (0);
}
