#include <stdio.h>
/**
 * main - main function
 *
 *Return: 0 if successful
 */
int main(void)
{
int x;
char y;

for (x = 0; x < 10; x++)
putchar(x + '0');
for (y = 'a'; y < 'g'; y++)
putchar(y);
putchar('\n');
return (0);
}
