#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
int create(struct node **head,int newdata)
{ int sum;
	struct node *newnode= (struct node*)malloc(sizeof(struct node));
sum=sum+newdata;
	newnode->data=newdata;
	newnode->next=*head;
	*head=newnode;
	return sum;
}
main()
{ int s;
	struct node *head=NULL;
	int m=1,n;
	do
	{
		printf("enter element\n");
		scanf("%d",&n);
		s=s+create(&head,n);
		printf("for continuation press 1\n");
		scanf("%d",&m);
		
	}while(m==1);
	while(head!=NULL)
	{
		printf(" %d ",head->data);
		head=head->next;
		
	}
	printf("\nsum is %d\n",s);
}
