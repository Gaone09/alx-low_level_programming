#include "main"
/**
 * swap_int -swap the values of two integers
 * @: integer to swap
 * @b: integer to swap
 */
void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
        *b = m;
}
	
