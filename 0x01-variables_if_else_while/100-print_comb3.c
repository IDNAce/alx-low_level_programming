#include <stdio.h>
/**
 * main - main program
 * Return: 0 if successful
 */
int main(void)
{
	int x;
	int y;
	int m;

	for (x = 0; x < 10; x++)
	{
		for (y = 1; y < 10; y++)
		{
			if (x < y && x != y)
			{
			putchar(x + '0');
			putchar(y + '0');

			m = x + y;
			if (m != 17)
			{
				putchar(',');
			putchar(' ');
			}
			}
		}
	}
	putchar('\n');
	return (0);

}



