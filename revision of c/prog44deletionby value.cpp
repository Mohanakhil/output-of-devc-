#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
void create(struct node **head,int newdata)
{ 
struct node *newnode=(struct node*)malloc(sizeof(struct node));
newnode->data=newdata;
newnode->next=*head;
*head=newnode;
	
}
void deleted(struct node **head,int d)
{ 
struct node *prev=(struct node*)malloc(sizeof(struct node));
struct node *node2=*head;
if(d==1)
{
	*head=node2->next;
}
else
{

while(d>1&&node2->next!=NULL)
{ prev=node2;
	node2=node2->next;
	d=d-1;
}
}
printf("value of prev and prese is %d, %d\n",prev->data,node2->data);
prev->next=node2->next;	
}
main()
{ struct node *head=NULL;
int a,b,c,opt=2,n;
do{
	printf("enter element\n");
	scanf("%d",&a);
	create(&head,a);
	printf("press 2 for termination\n");
scanf("%d",&opt);
}while(opt!=2);
struct node *node1=head;
printf("\nbefore deletion\n");
while(node1!=NULL)
{
	printf("%d ",node1->data);
	node1=node1->next;
	}	
	printf("\nenter how many times you want to delete\n");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
	
	printf("\nenter node no to be deleted\n");
	scanf("%d",&b);
	deleted(&head,b);
	printf("\nafter deletion is \n");
	struct node *node3=head;
	while(node3!=NULL)
	{
		printf("%d ",node3->data);
		node3=node3->next;
	}}
}
