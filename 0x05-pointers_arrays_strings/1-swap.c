#include "main.h"
/**
 * swap_int - swap values of certain variables
 * @a: first variable
 * @b: second variabl
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
