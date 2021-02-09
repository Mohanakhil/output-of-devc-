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
int count(struct node *head,int n,int c)
{  
struct node *node1=head;
while(node1!=NULL)
{ if(node1->data==n) 
{ 
c++; 
return count(node1->next,n,c);}
if(node1->data!=n) return count(node1->next,n,c);	
}
return c;

 }
main()
{ struct node *head=NULL;
int a,b,c;
do{
	printf("enter ele\n");
	scanf("%d",&a);
	create(&head,a);
	printf("enter 2 to end\n");
	scanf("%d",&b);
}while(b!=2);
struct node *node1=head;
while(node1!=NULL)
{ printf("%d ",node1->data);
node1=node1->next;	
}
do{ int c=0,n;
printf("enter the ele in list for counting\n");
scanf("%d",&n);
printf("\nthe ele %d appears %d times\n",n,count(head,n,c));
printf("\npress 2 to end\n");
scanf("%d",&b);
}while(b!=2);
}
