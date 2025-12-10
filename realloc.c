#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,i,*ptr;
	printf("enter n value");
	scanf("%d",&n);
	ptr=(int*)malloc(4);
	ptr=(int*)realloc(ptr,10);
	printf("enter no.of integer");
	for(i=0;i<n;i++)
	{
		scanf("%d",ptr+i);
	}
	return 0;
}
