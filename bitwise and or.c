#include<stdio.h>
int main()
{
	int x,y,AND,OR;
	printf("enter x&y values");
	scanf("%d%d",&x,&y);
	x=x&y;
	printf("\n bitwise AND=%d",x);
	y=x|y;
	printf("\n bitwise OR=%d",y);
	return 0;
	
}
