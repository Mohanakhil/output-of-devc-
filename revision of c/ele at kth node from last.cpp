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
int getlast(struct node **head,int l)
{ int i,c=0;
	struct node *node1=*head;
	while(node1!=NULL)
	{
		c=c+1;
		node1=node1->next;
	}
	printf("count of ele is %d\n",c);
	node1=*head;
for(i=1;i<c-l+1;i++) node1=node1->next;

	return node1->data;
}
main()
{ struct node *head=NULL;
int a,b,l=0;
do{
	printf("enter ele\n");
	scanf("%d",&a);
	create(&head,a);
	printf("press 2 for term\n");
	scanf("%d",&b);
}while(b!=2);
struct node *node1=head;
while(node1!=NULL)
{
	printf("%d ",node1->data);
	node1=node1->next;
}
do{
printf("enter index which is required from last\n");
scanf("%d",&l);
printf("element in index %d from last is %d\n",l,getlast(&head,l));
printf("press 2 for termi\n");
scanf("%d",&b);
}while(b!=2);
}
