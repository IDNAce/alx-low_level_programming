#include <stdio.h>
/**
 * main - main function
 * Return: 0 if successful
 */
int main(void)
{
	int x;
	int y;
	int z;
	int m;

	for (x = 0; x < 10; x++)
	{
		for (y = 1; y < 10; y++)
		{
			for (z = 2; z < 10; z++)
			{
				if (x < y && y < z)
				{
					putchar(x + '0');
					putchar(y + '0');
					putchar(z + '0');
					m = x + y + z;
					if (m != 24)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

