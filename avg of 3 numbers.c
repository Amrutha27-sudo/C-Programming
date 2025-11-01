#include<stdio.h>
int main()
{
	float a,b,c,sum,avg;
	printf("enter a,b,c values");
	scanf("%f%f%f",&a,&b,&c);
	sum=a+b+c;
	avg=sum/3;
	printf("avg of 3 integers is=%f",avg);
	return 0;
}
