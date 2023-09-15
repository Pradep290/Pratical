#include <stdio.h>
int main()
{
	int x;   
	printf("enter the number:");
	scanf("%d",x);
	int*ptr;
	ptr=&x;
	printf("%d,x");
	printf("%d",ptr);
	printf("%d",ptr);
}

