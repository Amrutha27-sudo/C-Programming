#include<stdio.h>
#include<string.h>
struct student
{
	char name[50];
	int marks;
};
int main()
{
	struct student s1,s2;
	strcpy(s1.name,"amrutha");
	s1.marks=80;
	s2=s1;
	printf("name:%s,marks:%d\n",s2.name,s2.marks);
	return 0;
}
