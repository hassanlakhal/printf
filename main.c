#include <stdio.h>
#include"main.h"
/**
  * main - A main to tests %c and %s cases in _printf()
  * vs. printf()
  *
  * Return: Always zero.
  */
int main(void)
{
	int a = 0, b = 0;

	a = printf("Expected output:    %yd\n");
	b = _printf("Current output:     %yd\n");
	printf("%d  %d",a,b);
}
