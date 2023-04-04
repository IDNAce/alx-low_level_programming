#include "main.h"
/**
 * _memcpy - copy memory
 * @dest: variable
 * @src: variable
 * @n: variable
 * Return: always 0
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	_memcpy(dest, src, n);
	while (n--)
	{
	*dest++ = *src++;
	}
	return (dest);
}

