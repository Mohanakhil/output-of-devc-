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
{printf("\n hello u landed in print\n");
struct node *node1=*head;
while(node1->next!=NULL)
{printf("%d ",node1->data);
node1=node1->next;
}
printf("%d ",node1->data);printf("\nreverse is \n");
while(node1!=NULL)
{printf("%d ",node1->data);
node1=node1->prev;
}
}
main()
{int a,b,s;struct node *head=NULL;
do{
	printf("enter ele\n");
	scanf("%d",&a);
	create(&head,a);
	printf("press 2 for term\n");
	scanf("%d",&b);
}while(b!=2);
print(&head);
do{
printf("\nMENU\n1-for deletion before \n2- for deletion after\n");
scanf("%d",&s);
switch(s)
{case 1:
	{do{struct node *node1=head;
		printf("\nenter index of node before which ele will be deleted\n");
		scanf("%d",&a);
		while(a>0)
		{a--;
		node1=node1->next;
		} if(node1->prev==NULL)
         {printf("\nsorry no ele exists \n");
         break;
		 }
		 if(node1->prev->prev==NULL)
		 { head=node1;
		 free(node1->prev);
		 head->prev=NULL;break;
		 }
		 if(node1->prev->prev!=NULL&&node1->prev!=NULL&&node1!=NULL)
		 { 
		 	node1->prev=node1->prev->prev;
		 	node1->prev->next=node1;break;
		 }
		printf("\npress 2 for term\n");
		scanf("%d",&b);
	}while(b!=2);
	break;
	}
	case 2:{do{struct node *node1=head;
		
		printf("\nenter index after which ele will be deleted\n");
		scanf("%d",&a);
		
		while(a>0)
		{a--;
		node1=node1->next;
		}
		if(node1->next==NULL)
		{printf("\nsorry no ele exists after this\n");break;
		}
		if(node1->next->next==NULL)
		{free(node1->next);
		node1->next=NULL;break;
		}
		if(node1!=NULL&&node1->next!=NULL&&node1->next->next!=NULL)
		{node1->next->next->prev=node1;
		node1->next=node1->next->next;break;
		}
		printf("\npress 2 for term\n");
		scanf("%d",&b);
	}while(b!=2);
	}
	}print(&head);
printf("\npress 2 for total prog term\n");
		scanf("%d",&b);
}while(b!=2);
}
