#include <stdio.h>
#include <malloc.h>
#include<stdlib.h>


struct node
{
    int data;
    struct node *link;
};

struct node *start = NULL, *temp, *last, *t1, *t2;

void first_insert()
{
    int e;
    temp = (struct node*)malloc(sizeof(struct node));

    printf("\nEnter an element to store in node: ");
    scanf("%d",&e);

    temp->data = e;
    temp->link = NULL;

    if(start == NULL)
    {
        start = temp;
        last = temp;
    }
    else
    {
        temp->link = start;
        start = temp;
    }
}

void last_insert()
{
    int e;
    temp = (struct node*)malloc(sizeof(struct node));

    printf("\n\tEnter an element to store in node: ");
    scanf("%d",&e);

    temp->data = e;
    temp->link = NULL;

    if(start == NULL)
    {
        start = temp;
        last = temp;
    }
    else
    {
        last->link = temp;
        last = temp;
    }
}

void middle_insert()
{
    int e,pos,i=1;

    temp = (struct node*)malloc(sizeof(struct node));

    printf("\n\tEnter an element to store in node: ");
    scanf("%d",&e);

    temp->data = e;
    temp->link = NULL;

    printf("\nEnter the position to insert: ");
    scanf("%d",&pos);

    if(start == NULL)
    {
        start = temp;
    }
    else
    {
    	printf("\n inside of middle insert fun");
        t1 = start;

        while(i < pos)
        {
            t2 = t1;
            t1 = t1->link;
            i++;
        }
        temp->link = t2->link;
        t2->link=temp;
    }
}
void first_delete()
{
	if(start==NULL)
	{
		printf("\n\tlinked list is empty no nodes to perform delete operation");
	}
	else
	{
		start = start->link;
		printf("\n\t first node is deleted successfully");
	}
}
void last_delete()
{
	if(start==NULL)
	printf("\n\t no nodes in linked list to delete");
	else
	{
		t1 = start;
		while(t1->link!=NULL)
		{
			t2 = t1;
			t1 = t1->link;
		}
		t2->link = NULL;
		last = t2;
	}
}
void middle_delete()
{
	int pos,i=1;
	printf("\n enter the position to delete the node");
	scanf("%d",&pos);
	if(start==NULL)
	printf("\n\t no element to delete,linked list is empty");
	else
	{
		t1 = start;
		while(i<pos)
		{
			t2 = t1;
			t1 = t1->link;
			i++;
		}
		t2->link = t1->link;
	}
}
void display()
{
	if(start==NULL)
	{
		printf("\n no elements in linked list");
	}
	else
	{
		printf("\n\t\t linked list elements are");
		temp = start;
		while(temp!=NULL)
		{
			printf("%d",temp->data);
			temp = temp->link;
		}
	}
}
int main()
{
	int ch,k;
	while(1)
	{
		printf("\n\t\t\t linked list operations");
		printf("\n\n\t\t1 first insert");
		printf("\n\n\t\t2 last insert");
		printf("\n\n\t\t3 middle insert");
		printf("\n\n\t\t4 first delete");
		printf("\n\n\t\t5 last delete");
		printf("\n\n\t\t6 middle delete");
		printf("\n\n\t\t7 display");
		printf("\n\n\n\n\t\t8 exit");
		printf("\n\n\t enter your choice");
		scanf("%d",&ch);
		switch(ch)
		{
          case 1: first_insert();
		          break;
          case 2: last_insert(); 
		          break;
          case 3: middle_insert(); 
		          break;
          case 4: first_delete(); 
		          break;
          case 5: last_delete(); 
		          break;
          case 6: middle_delete(); 
		          break;
          case 7: display(); 
		          break;
          case 8: exit(0);
                  break;
      }
  }
  return 0;
}



