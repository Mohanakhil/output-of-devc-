#include<stdio.h>
typedef struct point
	{
		int x; int y;
	} point;
void display(point );
main()
{
	
	point p1;
	printf("enter value of x and y \n");
	scanf("%d %d",&p1.x,&p1.y);
	
	display(p1);
}
void display(point p)
{
	printf("coordinates are %d %d",p.x,p.y);
}
