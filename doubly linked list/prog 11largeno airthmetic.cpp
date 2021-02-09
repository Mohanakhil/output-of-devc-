#include<stdio.h>
#include<stdlib.h>
struct node
{int data;
struct node *next;
struct node *prev;
};
void create1(struct node **head,int newdata)
{struct node *newnode=(struct node*)malloc(sizeof(struct node));
newnode->data=newdata;
newnode->next=*head;
newnode->prev=NULL;
if(*head!=NULL)
{(*head)->prev=newnode;
}
*head=newnode;
}
void create2(struct node **head,int newdata)
{struct node *newnode=(struct node*)malloc(sizeof(struct node));
newnode->data=newdata;
newnode->next=*head;
newnode->prev=NULL;
if(*head!=NULL)
{(*head)->prev=newnode;
}
*head=newnode;
}

void print(struct node **head)
{struct node *node1=*head;
while(node1!=NULL)
{printf("%d ",node1->data);
node1=node1->next;
}
}
int main()
{int a,b,c=0,d=0;struct node *head1=NULL,*head2=NULL;
do{
	printf("enter ele\n");
	scanf("%d",&a);c++;
	create1(&head1,a);
	printf("press 2 for term\n");
	scanf("%d",&b);
}while(b!=2);printf("\nfirst no is\n");
 print(&head1);printf("\n");
 do{
	printf("enter ele\n");
	scanf("%d",&a);d++;
	create2(&head2,a);;
	printf("press 2 for term\n");
	scanf("%d",&b);
}while(b!=2);printf("second no is \n");
print(&head2);
struct node *current=head1,*prev=NULL,*temp=NULL;
while(current!=NULL)
{temp=current->prev;
current->prev=current->next;
current->next=temp;
current=current->prev;
}
if(head1!=NULL)
{head1=temp->prev;
} printf("\nfirst no is reversed\n");
print(&head1);
if(d>1)
{
current=head2;
while(current!=NULL)
{temp=current->prev;
current->prev=current->next;
current->next=temp;
current=current->prev;
}
if(head2!=NULL)
{ head2=temp->prev;
}
}
printf("\nsec also reversed\n");
print(&head2);
struct node *node1=head1,*node2=head2;
printf("\ncount of digits is %d %d\n ",c,d);
if(c>=d)
while(c>0&&node2!=NULL&&node1!=NULL)
{node1->data=(node1->data+node2->data);
if(node1->data>9&&node1->next!=NULL)
{int t=node1->data;printf("\n%d\n",t);
node1->data=(t%10);
t=t/10;
node1->next->data=(node1->next->data)+(t);

}
c--;
node1=node1->next;
node2=node2->next;
}
current=head1;
while(current->next!=NULL)
{
if(current->data>9)
{
int t=current->data;
current->data=t%10;
t=t/10;
current->next->data=(current->next->data)+(t);

}
printf("\n after loop current=%d \n",current->data);
current=current->next;
}
current=head1;
while(current!=NULL)
{temp=current->prev;
current->prev=current->next;
current->next=temp;
current=current->prev;
}
if(head1!=NULL)
{head1=temp->prev;
}
printf("res=\n");
print(&head1);

}
