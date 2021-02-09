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
int get(struct node **head,int k)
{ int a;
	struct node *node1=*head;
	while(k>0&&node1!=NULL)
	{ a=node1->data;
	node1=node1->next;
		k--;
	}
	return a;
}
main()
{ struct node *head=NULL;
int a=0,b=0,i=0;
do
{
	printf("enter ele\n");
	scanf("%d",&a);
	create(&head,a);
	printf("press 2 for term");
	scanf("%d",&b);
}while(b!=2);

struct node *node1=head;
while(node1!=NULL)
{
	printf("%d ",node1->data);
	node1=node1->next;
}
do{

printf("enter the kth node\n");
scanf("%d",&a);
printf("element in kth node is %d\n",get(&head,a));
printf("press 2 to term");
scanf("%d",&b);
}while(b!=2);

}
