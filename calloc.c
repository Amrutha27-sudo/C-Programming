#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,*ptr,i;
	printf("enter n value");
	scanf("%d",&n);
	ptr=(int*)calloc(n,2);
	printf("enter integer numbers");
	for(i=0;i<n;i++)
	{
		scanf("%d",ptr+i);
	}
	return 0;
}
