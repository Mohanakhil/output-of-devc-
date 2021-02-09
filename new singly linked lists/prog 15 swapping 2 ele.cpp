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
{int a,b,t,c=0,x1,x2;struct node *head=NULL;
do{printf("enter ele\n");
scanf("%d",&a);
create(&head,a);
printf("press 2 for term\n");
scanf("%d",&b);
}while(b!=2);

do{

struct node *node3=head;
while(node3!=NULL)
{printf("%d ",node3->data);
node3=node3->next;
}
printf("enter two ele for swapping\n");
scanf("%d %d",&x1,&x2);

struct node *node1=head->next,*prev1=head,*prev2=head,*node2=head->next;
while(node1!=NULL&&node1->data!=x1)
{prev1=prev1->next;
node1=node1->next;	
}
while(node2!=NULL&&node2->data!=x2)
{prev2=prev2->next;
node2=node2->next;
}

printf("prev1= %d ,node1=%d\n,prev2=%d,node2=%d\n",prev1->data,node1->data,prev2->data,node2->data);

if(x1==head->data||x2==head->data)
{struct node *newnode3=(struct node*)malloc(sizeof(struct node));
newnode3->data=node2->data;
newnode3->next=head->next;

struct node *newnode4=(struct node*)malloc(sizeof(struct node));
newnode4->data=head->data;
prev2->next=newnode4;
newnode4->next=node2->next;
}


struct node *newnode=(struct node*)malloc(sizeof(struct node));
newnode->data=node2->data;
prev1->next=newnode;
newnode->next=node1->next;
struct node *newnode2=(struct node*)malloc(sizeof(struct node));
newnode2->data=node1->data;
prev2->next=newnode2;
newnode2->next=node2->next;
free(node1);
free(node2);

node1=head;
while(node1!=NULL)
{printf("%d ",node1->data);
node1=node1->next;
}
printf("press 2 for term\n");
scanf("%d",&b);
}while(b!=2);
}




