#include <stdio.h>
/**
 * main - main function
 *
 * Return: 0 if successful
 */
int main(void)
{
	int x;

	for (x = 0; x < 10; x++)
		putchar(x + '0');
	putchar('\n');
	return (0);
}

