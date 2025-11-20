#include<stdio.h>
int main()
{
	char s1[20],s2[20];
	printf("enter string 1 name");
	gets(s1);
	strcpy(s2,s1);
	printf("original string=%s",s1);
	printf("\n copied string=%s",s2);
	return 0;
}
