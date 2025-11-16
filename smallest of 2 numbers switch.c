#include<stdio.h>
int main()
{
	int a,b;
	printf("enter a,b values");
	scanf("%d%d",&a,&b);
	switch(a<b)
	{
		case 1:printf("a is small");
		break;
		case 2:printf("b is small");
		break;
	}
	return 0;
}
