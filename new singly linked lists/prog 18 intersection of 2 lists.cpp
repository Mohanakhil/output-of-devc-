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
void create1(struct node **head1,int newdata)
{struct node *newnode=(struct node*)malloc(sizeof(struct node));
newnode->data=newdata;
newnode->next=*head1;
*head1=newnode;
}
void create2(struct node **head2,int newdata)
{struct node *newnode=(struct node*)malloc(sizeof(struct node));
newnode->data=newdata;
newnode->next=*head2;
*head2=newnode;
}
void create3(struct node **head3,int newdata)
{struct node *newnode=(struct node*)malloc(sizeof(struct node));
newnode->data=newdata;
newnode->next=*head3;
*head3=newnode;
}
main()
{int a,b,t=0,max,m;
struct node *head=NULL;
do{printf("enter ele for first list\n");
scanf("%d",&a);
create(&head,a);
printf("press 2 for term\n");
scanf("%d",&b);
}while(b!=2);

struct node *head1=NULL;
do{printf("enter eles for second list\n");
scanf("%d",&a);
create1(&head1,a);
printf("press 2 for term\n");
scanf("%d",&b);
}while(b!=2);
printf("\nfirst ll is \n");
struct node *node1=head;
while(node1!=NULL)
{printf("%d ",node1->data);
node1=node1->next;
}

node1=head1;printf("\nsecond ll is \n");
while(node1!=NULL)
{printf("%d ",node1->data);
node1=node1->next;
}node1=head;
struct node *node2=head1;struct node *head2=NULL;
while(node1!=NULL)
{while(node2!=NULL)
{if(node1->data==node2->data) 
{
a=node2->data;
create2(&head2,a);
}
node2=node2->next;
}
node2=head1;
node1=node1->next;
}
node1=head2;printf("\n intersection ele are\n");
while(node1!=NULL)
{printf("%d ",node1->data);
node1=node1->next;
}node1=head2;node2=head;struct node *head3=NULL;max=node1->data;
printf("after arranging ascending order\n");m=0;

while(node2!=NULL)
{
while(node1!=NULL)
{m=m+1;

if(node1->data>max)
{
  max=node1->data;
  }
node1=node1->next;
}
printf("max=%d,m=%d\n",max,m);
struct node *node3=head2;
while(node3->data!=max)
{node3=node3->next;
}
printf("my node1=%d\n",node1->data);
node1->data=-100;
create3(&head3,max);
node2=node2->next;
}
node1=head3;
while(node1!=NULL)
{printf("%d ",node1->data);
node1=node1->next;
}
}
