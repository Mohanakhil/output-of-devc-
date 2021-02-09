#include<stdio.h>
main()
{
	int arr[]={1,2,3,4,5,6,7,8};
	int *ptr=arr;
	int *ptr2=arr+2;
	printf("sum is %p and diff is %d",ptr,*ptr-*ptr2);
}
