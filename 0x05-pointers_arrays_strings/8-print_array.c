#include "main.h"
#include <stdio.h>
/**
 * print_array - prints an arrray
 * @a: array name
 * @n: array size
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != 0 && i <= n - 1)
		{
			putchar(',');
			putchar(' ');
		}
		printf("%d", *(a + i));
	}
	putchar('\n');
}
