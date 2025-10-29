#include<stdio.h>
int main()
{
	int bs,da,gs,hra;
	printf("enter bs value ");
  scanf("%d",&bs);
	if(bs<=10000)
	{
		da=bs*10/100;
		hra=bs*15/100;
	}
	else
	{
		da=bs*5/100;
		hra=bs*10/100;
	}
	gs=bs+da+hra;
	printf("gs=%d",gs);
	return 0;
}
