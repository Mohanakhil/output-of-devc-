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
int palindrome(struct node **head)
{ int c=0,i=1,s=1;
struct node *node1=*head;
while(node1!=NULL)
{ c=c+1;
node1=node1->next;
} 
printf("count of ele is %d\n",c);
struct node *node2=*head;
while(i<=c/2)
{	node2=node2->next;
	i++;
}
struct node *node3=NULL;
printf("mid ele is %d\n",node2->data); printf("value of c/2 is %d",c%2);
if(c%2==0)
{
while(node2!=NULL)
{ 
int newdata=node2->data;
struct node *newnode=(struct node*)malloc(sizeof(struct node));
newnode->data=newdata;
newnode->next=node3;
node3=newnode; printf("\n now node3 gas %d \n",node3->data);
node2=node2->next;
} 
}
if(c%2!=0)
{  node2=node2->next;
	while(node2!=NULL)
{ 
int newdata=node2->data;
struct node *newnode=(struct node*)malloc(sizeof(struct node));
newnode->data=newdata;
newnode->next=node3;
node3=newnode; printf("\n now node3 has %d \n",node3->data);
node2=node2->next;
} 
}
struct node *node4=node3;
while(node4!=NULL)
{
	printf("%d \n\n",node4->data);
	node4=node4->next;
}
 struct node *node5=*head;i=1;
while(node3!=NULL)
{
	if(node3->data!=node5->data) s=0;
	node3=node3->next;node5=node5->next;
}
return s;	
}
main()
{ 
int a=0,b=0,s=0;
do{struct node *head=NULL;
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
s=palindrome(&head);
if(s==0) printf("it is not a palindrome\n");
 else 
 printf("it is a palindrome\n");

printf("press 2 to terminate\n");
scanf("%d",&b);
}while(b!=2);
}
