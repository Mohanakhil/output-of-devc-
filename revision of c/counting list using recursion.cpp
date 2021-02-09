#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
void create(struct node **head,int newdata)
{ struct node *newnode=(struct node*)malloc(sizeof(struct node));
newnode->data=newdata;
newnode->next=*head;
*head=newnode;
}
int count(struct node *head)
{
if(head==NULL)
return 0;
return 1+count(head->next);
}
main()
{ struct node *head=NULL;
int a,b,c=0;
do{
	printf("enter ele\n");
	scanf("%d",&a);
	create(&head,a);
	printf("press 2 to term\n");
	scanf("%d",&b);
}while(b!=2);
struct node *node1=head;
while(node1!=NULL)
{
	printf("%d ",node1->data);
	node1=node1->next;
}
printf("count of elements is %d ",count(head));	
}
