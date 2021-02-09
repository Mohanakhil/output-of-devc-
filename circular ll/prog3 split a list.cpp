#include<stdio.h>
#include<stdlib.h>
struct node 
{int data;
struct node *next;
};
void create(struct node **head,int newdata)
{struct node *newnode=(struct node*)malloc(sizeof(struct node));
newnode->data=newdata;
newnode->next=*head;struct node *temp=*head;
if(*head!=NULL)
{
while(temp->next!=*head)
{temp=temp->next;
}
temp->next=newnode;
}
else newnode->next=newnode;
*head=newnode;
}
void print(struct node **head)
{struct node *node1=*head;
if(*head!=NULL)
do{printf("%d ",node1->data);
node1=node1->next;
}while(node1!=*head);
}

void spliteven(struct node **head,int c)
{struct node *node1=*head;int t=c;struct node *temp2=*head,*temp3=*head;int count=1;
do{
while(c/2>1)
{node1=node1->next;
c--;
}
struct node *temp=node1->next;
node1->next=temp2;printf("\n%d break is \n",count);temp3=*head;*head=temp2;
print(head);
*head=temp3;
c=t;
temp2=temp;count++;
node1=temp2;
}while(node1!=*head);

}
void splitodd(struct node **head,int c)
{
}


int main()
{int a=0,b=0,c=0;struct node *head=NULL;
do{
	printf("enter ele\n");
	scanf("%d",&a);c++;
	create(&head,a);
	printf("press 2 for term\n");
	scanf("%d",&b);
}while(b!=2);
print(&head);
printf("count of nos is %d and c/2=%d\n",c,c/2);
if(c%2==0)
spliteven(&head,c);

else splitodd(&head,c);


}
