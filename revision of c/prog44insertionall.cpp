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
void insert(struct node **head,int newdata,int n)
{ struct node *newnode=(struct node*)malloc(sizeof(struct node));
	struct node *node3=*head;
	
	while(node3->next!=NULL&&node3->data!=n)
	{
		node3=node3->next;
	}
	newnode->data=newdata;
	newnode->next=node3->next;
	node3->next=newnode;
}
main()
{ int i=1,m=0,n=0,f,newdata=0,after;
struct node *head=NULL;
 while(i==1)
 {
	printf("enter element \n");
	scanf("%d",&m);
	create(&head,m);
	printf("press 1 to continue\n");
	scanf("%d",&i);
}
struct node *node1=head;
while(node1!=NULL)
{
	printf("%d  ",node1->data);
	node1=node1->next;
}
printf("\nenter an element to insert at front\n");
scanf("%d",&f);
create(&head,f); 
printf("\nafter inserting at front\n");
struct node *node2=head;
while(node2!=NULL)
{
	printf("%d  ",node2->data);
	node2=node2->next;
}

printf("\nenter element to be inserted anywhere\n");
scanf("%d",&newdata);
printf("enter after which element to insert\n");
scanf("%d",&after);
insert(&head,newdata,after);
struct node *node4=head;
while(node4!=NULL)
{
	printf("%d ",node4->data);
	node4=node4->next;
}

}
