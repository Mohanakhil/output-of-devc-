#include<stdio.h>
main()
{
	
	int arr[]={1,2,3,4,5};
	int *ptr=&arr[0];
	*ptr=*ptr;printf("\n the value of second element is %d",*ptr);
}
