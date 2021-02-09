#include<stdio.h>
#include<stdlib.h>
struct node
{int data;
struct node *next;
};
void create(struct node **head,int newdata)
{struct node *newnode=(struct node*)malloc(sizeof(struct node));
newnode->data=newdata;
newnode->next=*head;
*head=newnode;
}
main()
{int a,b,c=0,count=0;struct node *head=NULL;
do{
	printf("enter ele\n");
	scanf("%d",&a);
	create(&head,a);
	printf("press 2 for term\n");
	scanf("%d",&b);
}while(b!=2);
struct node *node1=head;
while(node1!=NULL)
{printf("%d ",node1->data);
node1=node1->next;
}
head->next->next->next->next->next=head->next;
struct node *fast=head,*slow=head;
node1=head;
while(fast!=NULL&&slow!=NULL&&fast->next!=NULL)
{fast=fast->next->next;
slow=slow->next;
if(slow==fast) {c++;
printf("loop is present\n");break;
}
}
if(c==0) printf("loop is absent\n");
printf("%d %d \n",slow->data,slow->data);
while(fast->next!=slow)
{count++;
fast=fast->next;
}
count++;
printf("count of loop is %d\n",count);
}
