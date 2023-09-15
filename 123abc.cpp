#include <stdio.h>
int main() {
	int number;
	printf("enter the number:");
	scanf("%d" ,& number);
	int factorial=1;
	
	for(int i= 1; i<= number; i++);{
 	    factorial *= i;
	}
	printf("The fact %d is %d \n",number,factorial);
	return 0;
}
