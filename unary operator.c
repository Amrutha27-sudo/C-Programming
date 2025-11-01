#include<stdio.h>
int main()
{
	int x=10,p,q,r,s;
	p=++x;
	printf("p=%d",p);
	q=x--;
	printf("\nq=%d",q);
	r=x++;
	printf("\nr=%d",r);
	s=--x;
	printf("\nx=%d",x);
	return 0;
}
