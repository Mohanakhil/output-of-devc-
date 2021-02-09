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
int checkifloopexists(struct node **head)
{ struct node *slowp=*head,*fastp=*head;
while(slowp!=NULL&&fastp!=NULL&&fastp->next!=NULL)
{ slowp=slowp->next;
fastp=fastp->next->next;
if(slowp->data==fastp->data)
{
printf("yes found loop\n");
return 1;}
}
printf("loop not found\n");
	return 0;
}
main()
{ struct node *head=NULL;
int a,b;
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
head->next->next->next->next=head->next;
checkifloopexists(&head);
	
}
