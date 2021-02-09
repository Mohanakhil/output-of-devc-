#include<stdio.h>
#include<stdlib.h>
struct node
{int data;
struct node *prev;
struct node *next;
};
void create(struct node **head,int newdata)
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
while(node1->next!=NULL)
{printf("%d ",node1->data);
node1=node1->next;
}
printf("%d ",node1->data);printf("\npath retrace\n");
while(node1!=NULL)
{printf("%d ",node1->data);
node1=node1->prev;
}
}
main()
{int a,b;struct node *head=NULL;
do{printf("enter ele\n");
scanf("%d",&a);
create(&head,a);
printf("press 2 for term\n");
scanf("%d",&b);
}while(b!=2);
printf("\noriginal is \n");
print(&head);
struct node *current=head,*temp=NULL;
while(current!=NULL)
{temp=current->prev;
current->prev=current->next;
current->next=temp;
current=current->prev;
}
head=current->prev;
print(&head);


}
