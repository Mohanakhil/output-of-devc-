#include<stdio.h>
#include<stdlib.h>
struct node
{int data;
struct node *next;
};
void create(struct node **head,int newdata);

main()
{int a,b;
struct node *head=NULL;

do{
	printf("enter an ele\n");
	scanf("%d",&a);
	struct node *newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=a;
	newnode->next=head;printf("newnode->next=%p\n",newnode->next);
	head=newnode;printf("head =%d\n",head->data);
	printf("press 2 for term\n");
	scanf("%d",&b);
}while(b!=2); 
printf("present head->data=%d  \n",head->data);
struct node *node1=head;
while(node1!=NULL)
{
printf("%d ",node1->data);
node1=node1->next;
}
}
