#include<stdio.h>
#include<stdlib.h>
struct node 
{int data;
struct node *next;
};
void create(struct node **head,int newdata)
{
}
main()
{int a,b;struct node *head=NULL;
do{
	printf("enter ele\n");
	scanf("%d",&a);
	create(&head,a);
	printf("press 2 for term\n");
	scanf("%d",&b);
}while(b!=2);

}
