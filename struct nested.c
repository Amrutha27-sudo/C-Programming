#include<stdio.h>
struct address
{
	char street[10];
	char city[10];
	long int pincode;
};
struct student
{
	int rno;
	char name[10];
	float per;
	struct address a;
};
int main()
{
	struct student s={101,"ammu",59.90,{"main road","kkd",533001}};
	printf("%d %s %f %s %s %ld",s.rno,s.name,s.per,s.a.street,s.a.city,s.a.pincode);
	return 0;	
}
