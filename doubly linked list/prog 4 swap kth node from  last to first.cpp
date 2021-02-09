#include<stdio.h>
#include<stdlib.h>
struct node 
{int data;
struct node *next;
struct node *prev;
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
printf("%d ",node1->data);printf("\nreverse traversal\n");
while(node1!=NULL)
{printf("%d ",node1->data);
node1=node1->prev;
}

}
main()
{int a,b,k,t,n=0;struct node *head=NULL;
do{printf("enter ele\n");
scanf("%d",&a);
create(&head,a);
printf("press 2 for term\n");
scanf("%d",&b);n++;
}while(b!=2);
print(&head);
do{
printf("\n enter value of k\n");
scanf("%d",&k);struct node *node1=head;t=k;
while(k>0&&node1!=NULL)
{k--;
node1=node1->next;
}k=t;
printf("\nHELLO NODE1=%d,n=%d\n",node1->data,n);
k=n-k-1;struct node *node2=head;
while(k>0&&node2!=NULL)
{k--;
node2=node2->next;
}
printf("\nHELLO NODE2=%d \n",node2->data);
struct node *temp1,*temp2,*temp3,*temp4;
temp1=node1->prev;
temp2=node2->next;
temp3=node1->next;
temp4=node2->prev;
node2->prev=temp1;
node2->next=temp3;
node1->prev=temp4;
node1->next=temp2;
print(&head);
printf("press 2 for term\n");
scanf("%d",&b);

}while(b!=2);

}
