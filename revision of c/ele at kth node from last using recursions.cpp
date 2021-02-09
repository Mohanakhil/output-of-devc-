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
int getlast(struct node *head,int k,int t)
{ struct node *node1=head;

if(t==k) return node1->data;
if(t!=k) t++;
return getlast(head->next,k,t);	
}
main()
{ struct node *head=NULL;
int a,b,c,k,l;
do{
	printf("enter ele\n");
	scanf("%d",&a);
	create(&head,a);
	printf("press 2 for term\n");
	scanf("%d",&b);
}while(b!=2);
struct node *node1=head;
while(node1!=NULL)
{
	printf("%d ",node1->data);
	node1=node1->next;
} 
do{
l=0;int t=1,c=0;
	printf("enter index from last\n");
	scanf("%d",&l);
	*node1=*head;
	while(node1!=NULL)
	{ c=c+1;node1=node1->next;
 	}
 	k=c-l+1;
 	printf("element in that %d index from last  is %d \n",l,getlast(head,k,t));
	
}while(b!=2);
}
