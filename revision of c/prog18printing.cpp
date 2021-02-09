#include<stdio.h>
#define print(x,y) x##y
main()
{ int a;

	printf("string is %d",print(36,12));
}
