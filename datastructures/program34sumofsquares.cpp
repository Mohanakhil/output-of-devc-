#include<stdio.h>
int main()
{
	int a[10],n,i,*p=a,sum=0;
	printf(" enter no of elements in array= ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{	printf("enter a[%d]= ",i);
		scanf("%d",p);printf("pointer value is %d\n\n",*p);p=p+1;
		}*p=a[0];
		for(i=0;i<n;i++)
          {		sum=sum+ ((*p)*(*p)); printf("pointer value is %d\n\n",*p);
				*p=a[i+1];
				}
	
printf("\nthe sum is %d",sum);	
}
