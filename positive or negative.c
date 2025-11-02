#include<stdio.h>
int main()
{
	int x;
	printf("enter x value");
	scanf("%d",&x);
	switch(x>0)
	{
		case 1:printf("it is a positive");
		break;
		case 0:printf("it is a negative");
		break;
	}
	return 0;
}
