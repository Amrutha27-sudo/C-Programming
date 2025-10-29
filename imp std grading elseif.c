#include<stdio.h>
int main()
{
	int s1,s2,s3,tot,per;
	printf("enter subject marks");
	scanf("%d%d%d",&s1,&s2,&s3);
	tot=s1+s2+s3;
	per=tot/3;
	if(s1>=40&&s2>=40&&s3>=40)
	{
		if(per>=90)
		printf("a grade");
		else if(per>=70)
		printf("b grade");
		else if(per>=50)
		printf("c grade");
		else if(per>=40)
		printf("d grade");
	}
	else 
	printf("failed");
	return 0;
}
