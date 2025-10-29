#include<stdio.h>
int main()
{
	int a,b,c,d;
	printf("enter a,b,c,d values");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	if(a<b&&a<c&&a<d)
	printf("a is small");
	else if(b<c&&b<d)
	printf("b is small");
	else if(c<d)
	printf("c is small");
	else
	printf("d is small");
	return 0;
}
