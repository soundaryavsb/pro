#include <stdio.h>
int main(void) {
	int count=0,num;
	scanf("%d",&num);
   while(num>0)       
		{
		num=num/10;
		++count;
		}
	printf("count=%d",count);
		return 0;
}
