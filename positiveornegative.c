#include <stdio.h>

int main(void) {
	int num;
	scanf("%d",&num);
	if(num==0)
	{
		printf("The number is zero");
	}
	else if(num>0)
	{
		printf("The number is positive");
	}
	else
	{
		printf("The number is negative");
	}
	// your code goes here
	return 0;
}
