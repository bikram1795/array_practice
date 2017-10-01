// A simple C program for traversal of a linked list
#include<stdio.h>
#include<stdlib.h>
 
struct Node 
{
  int data;
  struct Node *next;
};
typedef struct Node NODE;
 
// This function prints contents of linked list starting from 
// the given node
void printList(struct Node *n)
{
  while (n != NULL)
	  {
	     printf(" %d->", n->data);
	     n = n->next;
  }
	printf("NULL\n");
}
 
int main()
{
  NODE *head, *first, *temp=0;
  int choice=1;
  first=0;
  while(choice)
  {
	head = (NODE *)malloc(sizeof(NODE));
	printf("Enter the data item: ");
	scanf("%d",&head->data);
	if(first !=0)
	{
		temp->next=head;
		temp = head;
	}
	else
	{
		first=temp=head;
	}
	printf("Continue? (0 for no, 1 for yes)");
	scanf("%d",&choice);
  }
	temp->next=0;
	temp=first;
/*	while(temp !=0)
	{
		printf("%d->",temp->data);
		temp=temp->next;
   	}
	printf("NULL\n");*/
  printList(temp);  
  return 0;
}
