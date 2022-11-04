#include<stdio.h>
#include"printf.h"
int main()
{
	char *str = "alixoh";
	int a = printf("%p\n",str);
	printf("%d\n",a);
}
