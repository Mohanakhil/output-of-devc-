#include<stdio.h>
#include<stdlib.h>
struct node
{int data;
struct node  *next;
};
void create(struct node **head,int newdata)
{struct node *newnode=(struct node*)malloc(sizeof(struct node));
newnode->data=newdata;
newnode->next=*head;struct node *temp=*head;
if(*head!=NULL)
{while(temp->next!=*head)
{temp=temp->next;
}
temp->next=newnode;
}
else newnode->next=newnode;
*head=newnode;
}
void print(struct node **head)
{struct node *node1=*head;
do
{printf("%d ",node1->data);
node1=node1->next;
}while(node1!=*head);
}
void split(struct node **head,int c)
{struct node *fast=*head,*slow=*head,*temp;int t=c/2;
while(fast->next->next!=*head&&slow->next!=*head&&fast->next!=*head)
{fast=fast->next->next;slow=slow->next;
}
if(c%2==0) 
{
fast=fast->next;
}
if(c==1){
 printf("\nfirst list is\n");print(head);
 printf("\nsecond list is NULL\n");
}
else{

printf("fast =%d slow=%d ",fast->data,slow->data);
temp=slow->next;
slow->next=*head;printf("\nfirst list is\n");
print(head);
fast->next=temp;
*head=temp;printf("\nsecond list is\n");
print(head);
}}
 main()
{int a,b,c=0;struct node *head=NULL;
do{printf("enter ele\n");
scanf("%d",&a);c++;
create(&head,a);
printf("press 2 for term\n");
scanf("%d",&b);
}while(b!=2);
print(&head);
split(&head,c);
}
