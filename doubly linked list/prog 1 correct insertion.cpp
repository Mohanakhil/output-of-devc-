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
{struct node *node1=*head;printf("you entered print func\n");
while(node1->next!=NULL)
{printf("%d ",node1->data);
node1=node1->next;
}
printf("%d ",node1->data);printf("\nreverse is\n");
while(node1!=NULL)
{printf("%d ",node1->data);
node1=node1->prev;
}
}
main()
{int a,b,s;struct node *head=NULL;
do{printf("enter ele\n");
scanf("%d",&a);
create(&head,a);
printf("press 2 for term\n");
scanf("%d",&b);
}while(b!=2);
print(&head);
do{
printf("\nMENU\n1-add at front\n2-add at afterindex\n3-add at before index\n");
scanf("%d",&s);
switch(s)
{case 1:{
do{printf("enter ele\n");
scanf("%d",&a);
create(&head,a);
printf("press 2 for term\n");
scanf("%d",&b);
}while(b!=2);
print(&head);break;
}case 2:	{ do{struct node *node1=head;
printf("enter index after which ele will be added\n");
scanf("%d",&a);
while(a>0)
{a--;node1=node1->next;}
printf("enter data\n");
scanf("%d",&b);
struct node *newnode=(struct node*)malloc(sizeof(struct node));
newnode->data=b;
if(node1->next!=NULL)
{newnode->next=node1->next;
newnode->prev=node1;
node1->next->prev=newnode;
node1->next=newnode;
}
else{node1->next=newnode;
newnode->next=NULL;
newnode->prev=node1;}
print(&head);
printf("press 2 for term\n");
scanf("%d",&b);
}while(b!=2);
break;
}
case 3:
	{ do{struct node *node1=head;
		printf("enter index before which ele will be added\n");
		scanf("%d",&a);
		while(a>0)
		{a--;
		node1=node1->next;
		}printf("\nHELLO%d \n",node1->data);
		printf("enter ele\n");
		scanf("%d",&b);
		struct node *newnode=(struct node*)malloc(sizeof(struct node));
		newnode->data=b;
		if(node1->prev!=NULL)
		{newnode->next=node1;
		newnode->prev=node1->prev;
		node1->prev->next=newnode;
		node1->prev=newnode;
		}
		else
		{newnode->prev=NULL;
		newnode->next=node1;
		node1->prev=newnode;
		head=newnode;
		}
		print(&head);
printf("press 2 for term\n");
scanf("%d",&b);
	}while(b!=2);
	}
break;}
printf("press 2 for entire prog  term\n");
scanf("%d",&b);
}while(b!=2);
}

