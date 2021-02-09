#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
main()
{ int newdata,opt=1;
	struct node *head=NULL,*newnode=NULL;
			
					head= (struct node*)malloc(sizeof(struct node));	
	do
	{
	
newnode=(struct node*)(malloc)(sizeof(struct node));
		printf("enter element\n");
		scanf("%d",&newdata);
		newnode->data=newdata;
		newnode->next=head;
		head=newnode;
		printf("enter option\n");
		scanf("%d",&opt);

	}while(opt!=0);
	
	while(head!=NULL)
	{
		printf("%d\n",head->data);
		head=head->next;
	}
}
