#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
void create(struct node**head,int newdata)
{ struct node *newnode=(struct node*)malloc(sizeof(struct node));
newnode->data=newdata;
newnode->next=*head;
*head=newnode;	
}
int count(struct node *head,int n,int c)
{ struct node *node1=head;
while(node1!=NULL)
{
	if(node1->data==n) {
	c++; return count(head->next,n,c);
}
	if(node1->data!=n) return count(head->next,n,c);
}
return c;
	
}
main()
{ struct node *head=NULL;
int a,b,d;
do{
	printf("enter ele\n");
	scanf("%d",&a);
	create(&head,a);
	printf("enter 2 for end\n");
	scanf("%d",&b);
}while(b!=2);
struct node *node1=head;
while(node1!=NULL)
{
	printf("%d ",node1->data);
	node1=node1->next;
}
do{
int c=0;
printf("enter ele to count \n");
scanf("%d",&d);	
printf("ele %d occurs %d times\n",d,count(head,d,c));
printf("ente 2 to end\n");
scanf("%d",&b);
}while(b!=2);
}
