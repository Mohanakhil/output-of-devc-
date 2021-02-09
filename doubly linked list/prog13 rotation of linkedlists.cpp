#include<stdio.h>
#include<stdlib.h>
struct node 
{int data;
struct node *next;
struct node *prev;
};
void create(struct node **head,int newdata)
{struct node *newnode=(struct node*)malloc(sizeof(struct node));
newnode->data=newdata;
newnode->next=*head;
newnode->prev=NULL;
if(*head!=NULL)
{(*head)->prev=newnode;
}
*head=newnode;
}
void print(struct node **head)
{struct node *node1=*head;
while(node1!=NULL)
{printf("%d ",node1->data);
node1=node1->next;
}

}
int main()
{ int a,b,n;struct node *head=NULL;
do
{printf("enter ele\n");
scanf("%d",&a);
create(&head,a);
printf("press 2 for term\n");
scanf("%d",&b);
}while(b!=2);
print(&head);
do{

printf("\nenter n for rotations\n");
scanf("%d",&n);
struct node *node1=head;
	struct node *temp;

	
while(n>0)
{temp=node1;
node1=node1->next;
node1->prev=NULL;
head=node1;node1=head;
	while(node1->next!=NULL)
	{node1=node1->next;
	}
node1->next=temp;
node1->next->next=NULL;
node1=head;

n--;
}printf("after rotation\n");
	print(&head);
	printf("press 2 for term\n");
	scanf("%d",&b);
}while(b!=2);
}

