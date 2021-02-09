#include<stdio.h>
main()
{
	int a[10],b,i,n=0,min,index,no;
	do{
		printf("enter value \n");
		scanf("%d",&a[i]);
		printf("press 2 to terminate\n");
		scanf("%d",&b);i++;n++;
	}while(b!=2);
	printf("before count arr is \n");
	for(i=0;i<n;i++)
	printf("%d ",a[i]);min=a[0];
	for(i=0;i<n;i++)
	{ if(a[i]<min)
	{
	  min=a[i];index=i;}
	}
	
	printf("min is %d and occurs at index of %d\n",min,index);
no=n-index;
printf("\n no of times array is rotated is %d times\n",no);
}
