#include<stdio.h>
#include<string.h>
struct employee
{
	int id;
	char name[10];
	float exp;
}s1={101,"ammu",2.5},s2;
int main()
{
	struct employee s3={103,"yuva",2.3},s4;
	s2.id=102;
	strcpy(s2.name,"lahari");
	s2.exp=1.4;
	printf("enter s4 id");
	scanf("%d",&s4.id);
	printf("enter s4 name");
	scanf("%s",&s4.name);
	printf("enter s4 exp");
	scanf("%f",&s4.exp);
	printf("employee details are:\n");
	printf("\n %d %s %f",s1.id,s1.name,s1.exp);
	printf("\n %d %s %f",s2.id,s2.name,s2.exp);
	printf("\n %d %s %f",s3.id,s3.name,s3.exp);
	printf("\n %d %s %f",s4.id,s4.name,s4.exp);
	return 0;	
}
