#include<stdio.h>
#include<stdlib.h>
struct node
{int data;
struct node *next;
};
void create(struct node **head,int newdata)
{struct node *newnode=(struct node*)malloc(sizeof(struct node));
newnode->data=newdata;
newnode->next=*head;
*head=newnode;
}
main()
{int a,b;
struct node *head=NULL;
do{
	printf("enter ele\n");
	scanf("%d",&a);
	create(&head,a);
	printf("press 2 for term\n");
	scanf("%d",&b);
}while(b!=2);
struct node *node1=head;
while(node1!=NULL)
{printf("%d ",node1->data);
node1=node1->next;
}
head->next->next->next->next=head->next;
struct node *fast=head,*slow=head;node1=head;int c=0;
while(node1!=NULL&&fast->next!=NULL&&fast!=NULL)
{slow=slow->next;
fast=fast->next->next;
node1=node1->next;
if(slow==fast){
	printf("yes loop is detected\n");c++;break;
}
}
if(c==0) printf("no loop is absent in list\n");
}
