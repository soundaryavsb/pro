#include <stdio.h>

int main(void) {
	int year;
	scanf("%d",&year);
	if(year%4==0)
	{
		printf("Leap year");
	}
	else
	{
		printf("Not leap year");
	}
	// your code goes here
	return 0;
}
