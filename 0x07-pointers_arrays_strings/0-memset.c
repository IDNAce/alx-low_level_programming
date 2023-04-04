#include "main.h"

/**
 * *_memset - Set the memory
 * @s: variable
 * @b: variable
 * @n: variable
 * Return: Always 0
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;
	unsigned int i;

	for (i = 0; i < n;  i++)
	{
		*(p + i) = b;
	}
	return (s);
}
