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
main()
{ struct node *head=NULL;
int a,b,i,c=0;
do{
printf("enter ele\n");
scanf("%d",&a);
create(&head,a);
printf("press 2 for termination\n");
scanf("%d",&b);
}while(b!=2);
struct node *node1=head;
while(node1!=NULL)
{
	printf("%d ",node1->data);
	node1=node1->next;
}
printf("enter element to be searched for\n");
scanf("%d",&i);
struct node *node2=head;a=0;c=1;
while(node2!=NULL)
{ 
		if(node2->data==i)	{
		a=a+1;break;} 
		if(node2->data!=i){
			c++;
		}
	node2=node2->next;
	
}
if(a>0) printf("data %d is present at %d node \n",i,c);
else printf("data not present\n");
}
