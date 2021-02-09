#include<stdio.h>
#include<stdlib.h>
struct node
{int data;
struct node *prev;
struct node *next;
};
void create1(struct node **head,int newdata)
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
{int a,b,t,c1=0,c2=0;
do{
struct node *head1=NULL;
printf("enter first no\n");
do{
	printf("enter ele\n");
	scanf("%d",&a);c1++;
	create1(&head1,a);
	printf("enter 2 for term\n");
	scanf("%d",&b);
}while(b!=2);printf("first no is \n");
print(&head1);
struct node *head2=NULL;
	printf("\nenter second no\n");
	do{
		printf("enter ele\n");
		scanf("%d",&a);c2++;
		create1(&head2,a);
		printf("press 2 for term\n");
		scanf("%d",&b);
	}while(b!=2);printf("second no is \n");
	print(&head2);

	struct node *current1=head1,*temp;
	while(current1!=NULL)
	{temp=current1->prev;
	current1->prev=current1->next;
	current1->next=temp;
	current1=current1->prev;
	}
	if(temp!=NULL)
	{head1=temp->prev;
}        current1=head2;
while(current1!=NULL)
{temp=current1->prev;
current1->prev=current1->next;
current1->next=temp;
current1=current1->prev;
}
if(temp!=NULL)
	{head2=temp->prev;
	}
	printf("\nafter reversing both\n");
	print(&head1);
	printf("\n");
	print(&head2);
	printf("count of both is %d %d\n",c1,c2);
		printf("\nafter subtraction\n");
		struct node *node1=head1;struct node *node2=head2;struct node *head3=NULL;c1=c1-c2;
		while(c2>0)
		{t=(node1->data)-(node2->data);
		if(t<0&&node1->next!=NULL)
		{t=t+10;printf("\nhi t=%d\n",t);
		node1->next->data=(node1->next->data)-1;
		}
		create1(&head3,t);
		node1=node1->next;
		node2=node2->next;
		c2--;
		}
		while((c1)>0&&node1!=NULL)
		{t=node1->data;
		if(t<0&&node1->next!=NULL)
		{t=t+10;
		printf("\nhi hi t=%d\n",t);
		node1->next->data=(node1->next->data)-1;
		}
		create1(&head3,t);
		c1--;node1=node1->next;
		}
		printf("\nanswer is \n");
		print(&head3);
		printf("\npress 2 for term\n");
		scanf("%d",&b);
	}while(b!=2);
		
}
