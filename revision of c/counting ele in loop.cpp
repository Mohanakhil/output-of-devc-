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
int countofloop(struct node *slowp)
{ struct node *node1=slowp;
int count=1;
while(node1->next!=slowp)
{
	count++;
	node1=node1->next;
}
return count;
}

int checkifloopexists(struct node **head)
{ struct node *slowp=*head,*fastp=*head;
while(slowp!=NULL&&fastp!=NULL&&fastp->next!=NULL)
{ slowp=slowp->next;
fastp=fastp->next->next;
if(slowp->data==fastp->data) return countofloop(slowp);	
	}return 0;	
}

main()
{ struct node *head=NULL;
int a,b;
do{
	printf("enter ele\n");
	scanf("%d",&a);
	create(&head,a);
	printf("enter 2 for end\n");
	scanf("%d",&b);
}while(b!=2);
struct node *node1=head;
while(node1!=NULL)
{
	printf("%d ",node1->data);      //1-2-3-4-5
	node1=node1->next;
}
head->next->next->next->next->next=head->next;

printf("count of members in loop is %d ",checkifloopexists(&head));
}
