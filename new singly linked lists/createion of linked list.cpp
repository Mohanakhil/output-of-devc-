#include<stdio.h>
#include<stdlib.h>
struct node
{int data;
struct node *next;
};
main()
{int a;

struct node *head=(struct node*)malloc(sizeof(struct node));
struct node *second=(struct node*)malloc(sizeof(struct node));
head->data=20;
head->next=second;

printf("&second->data=%p ,head->next=%p,head-data =%d",&second->data,head->next,head->data);

}
