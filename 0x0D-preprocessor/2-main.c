#include "stdlib.h"
#include "stdio.h"
/**
 * main - prints name of the file a program
 *	was compiled from
 * Return: 0(success)
 */
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
