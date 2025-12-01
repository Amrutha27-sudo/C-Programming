#include<stdio.h>
int main()
{
	int x=10; //local variable
	printf("x=%d",x);
	display();
	return 0;
}
void display()
{
	printf("x=%d",x);
}
