#include<stdio.h>
int main()
{
	int tn,ts,i;
	printf("enter tn,ts value");
	scanf("%d%d",&tn,&ts);
	for(i=1;i<=ts;i++)
	{
		printf("%d*%d=%d\n",i,tn,i*tn);
	}
	return 0;
}
