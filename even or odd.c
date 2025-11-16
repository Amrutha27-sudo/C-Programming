#include<stdio.h>
int main()
{
	int a;
	printf("enter a value");
	scanf("%d",&a);
	switch(a%2==0)
	{
		case 1:printf("a is even");
		break;
		case 2:printf("a is odd");
		break;
	}
	return 0;
}
