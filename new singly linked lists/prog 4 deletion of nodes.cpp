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
do{	printf("enter ele\n");
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
do{struct node *prev=(struct node*)malloc(sizeof(struct node));
node1=head;
printf("press -1 for deleting first ele\n");
printf("enter index of node after which ele will be deleted\n");
scanf("%d",&a);
if(a==-1)
{head=node1->next;
} else{ 
while(node1!=NULL&&a>=0)
{prev=node1;
node1=node1->next;
a--;
}printf("at pres node1=%d,prev=%d\n",node1->data,prev->data);
prev->next=node1->next;
free(node1);
}node1=head;
while(node1!=NULL)
{printf("%d ",node1->data);
node1=node1->next;
}printf("enter ele to delete\n");
scanf("%d",&a);
node1=head;printf("node1-*>data=%d\n",node1->data);
if(node1->data==a) 
{ head=node1->next;
}

while(node1->data!=a&&node1!=NULL)
{prev=node1;
node1=node1->next;
}
printf("prev=%d ,node1=%d\n",prev->data,node1->data);
prev->next=node1->next;free(node1);
printf("\nafter deletion\n");
node1=head;
while(node1!=NULL)
{printf("%d ",node1->data);
node1=node1->next;
}
printf("press 2 for term\n");
scanf("%d",&b);
}while(b!=2);
}
