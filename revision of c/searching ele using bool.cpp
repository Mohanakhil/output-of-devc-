#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
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
bool search(struct node **head,int x,int *p)
{ *p=1;
	struct node *node1=*head;
	while(node1!=NULL)
	{
		if(node1->data==x) return true;
		if(node1->data!=x) *p=*p+1;
		node1=node1->next;
	}
	return false;
}
main()
{ struct node *head=NULL;
int a,b,c;
do{
	printf("enter element\n");
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
scanf("%d",&a);

search(&head,a,&c)?printf("yes %d is present at %d node\n",a,c):printf("no it is not present\n");
	printf("press 2 to termination\n");
	scanf("%d",&b);
}while(b!=2);
}
