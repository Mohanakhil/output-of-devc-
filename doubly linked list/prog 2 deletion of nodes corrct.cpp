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
{struct node *node1=*head;printf("\nyou came to print \n");
while(node1->next!=NULL)
{printf("%d ",node1->data);
node1=node1->next;
}
printf("%d ",node1->data);printf("\nafter reversing\n");

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
do{printf("\nMENU\n1-for deltion after givennode \n2-for deletion before given node\n");
scanf("%d",&s);
switch(s)
{case 1:{
do{
printf("\nenter index of node after which ele will be deleted\n");
	scanf("%d",&a);
	struct node *node1=head;
	while(a>0&&node1->next!=NULL)
	{a--;node1=node1->next;
	}
	printf("hi node1=%d\n",node1->data);
	if(node1->next->next!=NULL&&node1->next!=NULL&&node1!=NULL)
	{node1->next->next->prev=node1;
	node1->next=node1->next->next;
	
	}else{
		if(node1->next==NULL||node1==NULL) printf("\nSorry no ele is present after that node\n");
		if(node1->next->next==NULL)
		{free(node1->next);
		node1->next=NULL;	
		}	}
		print(&head);
		printf("\npress 2 for term\n");
		scanf("%d",&b);
		}while(b!=2);
		break;}
case 2:
	{do{struct node *node1=head;
		printf("\nenter index of node before which ele will be delted\n");
		scanf("%d",&a);
		while(a>0&&node1->next!=NULL)
		{a--;node1=node1->next;
		}
		if(node1->prev!=NULL&&node1->prev->prev!=NULL&&node1!=NULL)
		{
		node1->prev->prev->next=node1;
		node1->prev=node1->prev->prev;
		}
		else{
			if(node1->prev==NULL||node1==NULL) printf("\nsorry no node exists before thats node\n");
			if(node1->prev->prev==NULL) 
			{free(node1->prev->data);
			node1->prev=NULL;
			}}
		print(&head);
		printf("\npress 2 for term\n");
		scanf("%d",&b);
	}while(b!=2);
	break;
	}
}
printf("press 2 for total prog term\n");
scanf("%d",&b);
}while(b!=2);
}
