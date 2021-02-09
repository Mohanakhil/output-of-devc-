#include<stdio.h>
main()
{int n,i,a[20],*t=a,temp=0;
		printf("enter no of elements\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter a[%d]= \n",i);
		scanf("%d",t);printf("comp intakes is %d\n",*t);t=t+1;
	}t=&a[0];
	temp=*(t+1);
	*(t+1)=*(t+n-2);
	*(t+n-2)=temp;printf("temp=%d , *(t+1)=%d, *(t+n-2)=%d\n",temp,*(t+1),*(t+n-2));t=&a[0];i=0;
while(i<n)
{
	printf("%d ",*t);t=t+1;i=i+1;
}
}
