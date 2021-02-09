#include<stdio.h>
main()
{ int arr[]={1,2,3,4,5};
	int *ptr;
	*ptr = &arr[0];
	ptr++;
	printf("\n the value of second element  is %p",ptr);
}
