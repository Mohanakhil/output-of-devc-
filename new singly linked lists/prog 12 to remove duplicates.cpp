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
struct node *head=NULL,*head1=NULL;
do{
	printf("enter ele\n");
	scanf("%d",&a);
	create(&head,a);
	printf("press 2 for term\n");
	scanf("%d",&b);
}while(b!=2);struct node *node1=head;
while(node1!=NULL)
{printf("%d ",node1->data);
node1=node1->next;
}
node1=head;struct node *node2=head->next;
while(node1->next!=NULL)
{while(node2!=NULL)
{if(node1->data==node2->data)
{
node2->data=0;}
node2=node2->next;
}
node1=node1->next;
node2=node1->next;
}
node1=head;
while(node1!=NULL)
{if(node1->data!=0) 
{
struct node *newnode=(struct node*)malloc(sizeof(struct node));
newnode->data=node1->data;
newnode->next=head1;
head1=newnode;

}
node1=node1->next;
}
node1=head1;printf("\n after deletion of duplicates\n");
while(node1!=NULL)
{printf("%d ",node1->data);
node1=node1->next;
}

}
