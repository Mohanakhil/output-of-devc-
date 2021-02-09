#include<stdio.h>
#include<stdlib.h>
struct node
{int data;
struct node *next;
};
void create(struct node **head,int newdata)
{ struct node *newnode=(struct node*)malloc(sizeof(struct node));
newnode->data=newdata;
newnode->next=*head;
*head=newnode;
}
main()
{int a,b;struct node *head=NULL;
do{
	printf("enter ele\n");
	scanf("%d",&a);
	create(&head,a);
	printf("press 2 for term\n");
	scanf("%d",&b);
} while(b!=2);
struct node *node1=head;
while(node1!=NULL)
{printf("%d ",node1->data);
node1=node1->next;
}
do{ printf("\nafter given index\n");
printf("enter ele\n");
scanf("%d",&a);
printf("\n enter index after which ele will be added\n");
scanf("%d",&b);struct node *node1=head;
while(b>0&&node1!=NULL)
{ node1=node1->next;
b--;
}printf("present node1=%d ",node1->data);

struct node *newnode=(struct node*)malloc(sizeof(struct node));
newnode->data=a;
newnode->next=node1->next;
node1->next=newnode;
node1=head;printf("%d\n");
while(node1!=NULL)
{printf(" %d ",node1->data);
node1=node1->next;
}
printf("press 2 for term\n");
scanf("%d",&b);
}while(b!=2);
}
