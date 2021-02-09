#include<stdio.h>
#include<stdlib.h>
struct node
{int data;
struct node *next;
};
void create(struct node **head,int newdata)
{struct node *newnode=(struct node *)malloc(sizeof(struct node));
newnode->data=newdata;
newnode->next=*head;
*head=newnode;
}
main()
{int a,b,c=0;struct node *head=NULL;
do{
	printf("enter ele\n");
	scanf("%d",&a);
	create(&head,a);
	printf("press 2 for term\n");
	scanf("%d",&b);
}while(b!=2);
do{

struct node *node1=head;
while(node1!=NULL)
{printf("%d ",node1->data);
node1=node1->next;c++;
} int t=c;
node1=head;printf("count of ele is %d\n",c);int count=0;
printf("\n enter ele to be searched\n");c=0;
scanf("%d",&a);
while(node1!=NULL)
{c++;
if(node1->data==a)
 {count++;c--;
printf("%d is present and it is at %d node\n",a,c);break;
}
node1=node1->next;
} 
if(count==0) printf("sorry ele not present\n");
printf("press 2 for term\n");
scanf("%d",&b);
}while(b!=2);
do{int n,l,temp;
	printf("enter val of n and l\n");
	scanf("%d %d",&n,&l);int t=n;
	struct node *node1=head;
	while(node1!=NULL&&n>0)
	{node1=node1->next;n--;
	}n=t-l+1;	 printf("%d node from start is %d\n",temp,node1->data);
	while(node1!=NULL&&n>0)
	{node1=node1->next;
	n--;
	}
	 printf("%d node from end is %d\n",l,node1->data);
	printf("press 2 for term\n");
scanf("%d",&b);
}while(b!=2);
}





