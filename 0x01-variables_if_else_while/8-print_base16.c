#include <stdio.h>
/**
 * main - main fuction
 *
 * Return: always 0
 */

int main(void)
{
	int i;
	char j;

	for (i = 0; i < 10 ; i++)
        	putchar(i + '0');
	for (j = 'a' ; j <= 'f'; j++)
         	putchar(i);
	putchar('\n');
	return (0);
}
