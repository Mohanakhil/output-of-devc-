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
int search(struct node *head,int x,int *p)
{ struct node *node1=head;
if(node1->data==x) return true;
if(node1->data!=x) *p=*p+1;
return search(head->next,x,p);
	
}
main()
{ struct node *head=NULL;
int a,b,c;
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
c=1;
printf("enter ele to be searched\n");
scanf("%d",&a);
search(head,a,&c)?printf("yes %d ele is present at %d node\n",a,c):printf("no its not present\n");
printf("press 2 to terminate\n");
scanf("%d",&b);
}while(b!=2);
}
