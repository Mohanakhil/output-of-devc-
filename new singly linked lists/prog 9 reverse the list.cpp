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
{struct node *head=NULL;
int a,b;
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
}printf("\nafter reversing\n");
struct node *prev=NULL,*current=head,*next;
while(current!=NULL)
{next=current->next;
current->next=prev;
prev=current;
current=next;
}
head=prev;
while(head!=NULL)
{printf("%d ",head->data);
head=head->next;
}
}
