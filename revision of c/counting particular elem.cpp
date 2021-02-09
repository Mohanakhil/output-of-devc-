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
int count(struct node **head,int d)
{ int c=0;struct node *node1=*head;
while(node1!=NULL)
{ if(node1->data==d) c=c+1;
node1=node1->next;
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
	printf("press 2 to term\n");
	scanf("%d",&b);
}while(b!=2);
	struct node *node1=head;
	while(node1!=NULL)
{
	printf("%d ",node1->data);
	node1=node1->next;
}
do{

printf("enter ele to count \n");
scanf("%d",&d);
printf("ele %d is occuring %d times\n",d,count(&head,d));
printf("press 2 to term\n");
scanf("%d",&b);}
while(b!=2);}
