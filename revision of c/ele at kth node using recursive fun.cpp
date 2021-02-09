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
int getk(struct node *head,int k,int c)
{ struct node *node1=head;
if(c==k) return node1->data;
if(c!=k) c++;
	return getk(node1->next,k,c);
}
main()
{ struct node *head=NULL;
int a,b,k,c;
do{
	printf("enter ele\n");
	scanf("%d",&a);
	create(&head,a);
	printf("press 2 for termi\n");
	scanf("%d",&b);
}while(b!=2);
struct node *node1=head;
while(node1!=NULL)
{
	printf("%d ",node1->data);
	node1=node1->next;
}
do{ c=1;
	printf("enter index value\n");
	scanf("%d",&k);
	printf("value at index %d is %d\n",k,getk(head,k,c));
	printf("press 2 to termi\n");
	scanf("%d",&b);
}	while(b!=2);
}
