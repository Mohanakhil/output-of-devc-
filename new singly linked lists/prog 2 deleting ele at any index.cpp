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
{int a,b;struct node *head=NULL;
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
do{
node1=head;printf("\npress-1special for first ele deletion \n");
printf("enter index after which ele to delete\n");
scanf("%d",&a); 
if(a==-1)
{head=node1->next;
struct node  *node2=head;
while(node2!=NULL)
{printf("%d ",node2->data);
node2=node2->next;
}
}
else
{struct node *prev=(struct node*)malloc(sizeof(struct node));


while(node1!=NULL&&a>=0)
{
 prev=node1;
node1=node1->next;
a--;
}
printf("at present node1=%d,prev=%d\n",node1->data,prev->data);
prev->next=node1->next;
free(node1);
struct node  *node2=head;
while(node2!=NULL)
{printf("%d ",node2->data);
node2=node2->next;
}

}
printf("press 2 for term\n");
scanf("%d",&b);
}while(b!=2);
do{

printf("enter directly  ele to be delted\n");
scanf("%d",&a);
node1=head;struct node *prev=(struct node*)malloc(sizeof(struct node));
if(node1->data==a)
{head=node1->next;
node1=head;
while(node1!=NULL)
{printf("%d ",node1->data);
node1=node1->next;
}
}
else{
while(node1!=NULL&&node1->data!=a)
{prev=node1;
node1=node1->next;
}
prev->next=node1->next;
node1=head;
while(node1!=NULL)
{printf("%d ",node1->data);
node1=node1->next;
}
}printf("press 2 for term\n");
scanf("%d",&b);
}while(b!=2);
}
