#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
void create(struct node **head,int newdata)
{ struct node *newnode=(struct node*)malloc(sizeof(struct node));
newnode->data=newdata;
newnode->next=*head;
*head=newnode;
	
}
int search(struct node **head,int n,int *p)
{ int s=0;*p=1;
	struct node *node1=*head;
	while(node1!=NULL)
	{ if(node1->data==n)
	{s=s+1;break;
	
	}
	if(node1->data!=n)
	{
		*p=*p+1;}
	node1=node1->next;
	}
	return s;
		
	}

main()
{ struct node *head=NULL;
int a,b,c,d,s=0;
do{
	printf("enter ele\n");
	scanf("%d",&a);
	create(&head,a);
	printf("press 2 to terminate\n");
	scanf("%d",&b);
}while(b!=2);
struct node *node1=head;
while(node1!=NULL)
{
	printf("%d ",node1->data);
	node1=node1->next;
}
do{
	printf("enter ele to be searched\n");
	scanf("%d",&c);
	s=search(&head,c,&d);
if(s>=1)	printf("ele %d is present at %d node\n",c,d);
if(s==0) printf("element not present\n");
printf("press 2 to terminate\n");
scanf("%d",&b);
}while(b!=2);
}
