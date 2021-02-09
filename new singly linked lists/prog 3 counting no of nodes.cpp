#include<stdio.h>
#include<stdlib.h>
struct node
{ int data;
struct node *next;
};
void create(struct node **head,int newdata,int *d)
{struct node *newnode=(struct node*)malloc(sizeof(struct node));
newnode->data=newdata;
newnode->next=*head;
*head=newnode;*d=*d+1;
}
main()
{int a,b,c=0,n,z,t;struct node *head=NULL;
do{
	printf("enter ele\n");
	scanf("%d",&a);
	create(&head,a,&c);
	printf("press 2 for term\n");
	scanf("%d",&b);
}while(b!=2);
do{

struct node *node1=head;
while(node1!=NULL)
{printf("%d ",node1->data);
node1=node1->next;
}printf("count is %d\n",c);
printf("enter val of n and z you  want\nz is  ele no from last\n");
scanf("%d %d",&n,&z);node1=head;
t=n;
while(n>0)
{node1=node1->next;
n--;
}
printf("%d ele is %d\n",t,node1->data);
n=(c-1)-z;
while(n>0)
{node1=node1->next;
n--;
}t=z;
printf("%d ele from last is %d\n",t,node1->data);
printf("press 2 for term\n");
scanf("%d",&b);
}while(b!=2);
}
