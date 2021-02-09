#include<stdio.h>
typedef  struct 
{ int x;
int y;
	
} point1;
point1 p1={2,3};
typedef union
{
	int x;
	int y;
} point2;
point2 p2;
main()
{
p2.x=5;
p2.y=4;
printf("coord of 1 are %d %d\n",p1.x,p1.y);
printf("coordin of 2 are %d %d",p2.x,p2.y);
}
