#include<stdio.h>
int main()
{
	int a,b,right,left;
	printf("enter a value");
	scanf("%d",&a);
	printf("\n how many bits are moving ?");
	scanf("%d",&b);
	right=a>>b;
	printf("right shift value=%d",right);
	left=a<<b;
	printf("left shift value=%d",left);
	return 0;
}
