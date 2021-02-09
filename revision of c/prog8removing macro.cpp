#include<stdio.h>
float div(float,float);
#define div(x,y) x/y

main()
{
	printf("%0.2f",div(10.0,5.0));
	#undef div
	printf("\n%0.2f",div(10.0,5.0));
}
float div(float x,float y)
{
	return x/y;
}
