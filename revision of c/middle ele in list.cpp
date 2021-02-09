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
int mid(struct node **head)
{ int i=1,c=0;struct node *node1=*head;
while(node1!=NULL)
{
c++;node1=node1->next;	
}
node1=*head;
while(i<=c/2)
{ i++;
	node1=node1->next;
}
return node1->data;
}
main()
{ struct node *head=NULL; int a,b;
do{
	printf("enter ele\n");
	scanf("%d",&a);
	create(&head,a);
	printf("press 2 to end\n");
	scanf("%d",&b);	
}while(b!=2);
struct node *node1=head;
while(node1!=NULL)	
{
	printf("%d ",node1->data);
	node1=node1->next;
}
printf("middle element is %d\n",mid(&head));
}

