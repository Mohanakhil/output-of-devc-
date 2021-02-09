#include<stdio.h>
int  main()
{
	int n,i,a,P=0,N=0,Z=0;
	printf("enter total nos you  want to enter\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("enter no");
		scanf("%d",&a);
		if(a>0) P=P+1;
		if(a==0) Z=Z+1;
		if(a<0) N=N+1;
	}
	printf("\n The count of positves negatives and zeroes are %d %d %d",P,N,Z);
	return 0;
}
