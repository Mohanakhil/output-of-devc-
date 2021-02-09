#include<stdio.h>
#include<stdlib.h>
struct node 
{int data;
struct node *next;
};
void create(struct node **head,int newdata,int c)
{struct node *newnode=(struct node*)malloc(sizeof(struct node));int t=0,co=0;
newnode->data=newdata;
newnode->next=*head;struct node *temp=*head;
if(*head!=NULL)
{while(temp->next!=*head)
{temp=temp->next;
}
temp->next=newnode;
}
else newnode->next=newnode;
*head=newnode;
if(c>2)
{printf("\n HI c>1\n");struct node *t,*s,*f,*imp;
imp=(*head)->next;
struct node *node1=*head;
do{ printf("\n %d node1->data=%d,node1->next->data=%d\n",co,node1->data,node1->next->data);
	if((node1->data)>(node1->next->data))
	{t=node1->next->next;
	s=node1->next;
	f=node1;
	s->next=f;
	f->next=t;
	node1=s;*head=imp;
	printf("\nentered inner if\n");
	}node1=node1->next;co++;
	struct node *node2=*head;printf("\nc=%d \n",c);
	while(c>0)
	{printf("\n GEEKS node2=%d\n",node2->data);
	node2=node2->next;c--;
	}
	node2->next=*head;
}while(node1->next!=*head);
}
}
void print(struct node **head)
{struct node *node1=*head;
do{printf("%d ",node1->data);
node1=node1->next;
}while(node1!=*head);
}
main()
{int a,b,c=0;struct node *head=NULL;
do{
	printf("enter ele\n");
	scanf("%d",&a);c++;
	create(&head,a,c);
	printf("press 2 for term\n");
	scanf("%d",&b);
}while(b!=2);
print(&head);
}

