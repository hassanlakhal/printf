#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int len;
	int len1;
	int len2;
	len = _printf("Let's try to printf a simple sentence %%.\n");
	len2 = printf("Let's try to printf a simple sentence %%.\n");
	len1 = _printf("%s",NULL);
	len2 = printf("Let's try to printf a simple sentence %%.\n");
	_printf("Length:[%d, %i]\n", len2, len1);
	printf("Length:[%d, %i]\n", len, len);
	
	return (0);
}
