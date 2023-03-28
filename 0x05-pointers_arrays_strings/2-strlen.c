#include "main.h"
/**
 * _strlen - return string lenght
 * @s: string length to be returned
 * Return: 0
 */
int _strlen(char *s)
{
	int x;
	int count = 0;

	for (x = 0; s[x] != '\0'; x++)
	{
		count++;
	}
	return (count);
}
