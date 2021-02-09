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
{int a,b;struct node *head=NULL;
do{ printf("enter ele\n");
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
struct node *current=head,*prev=NULL,*next;
while(current!=NULL)
{next=current->next;
current->next=prev;
prev=current;
current=next;
}
head=prev;
node1=head;printf("\nafter reveersing\n");
while(node1!=NULL)
{printf("%d ",node1->data);
node1=node1->next;
}

}
