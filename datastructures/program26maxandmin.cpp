#include<stdio.h>
int main()
{
	int a[100],i,n,inter(int a[],int n);
	printf("enter no of  elements");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter a[%d]= ",i);
		scanf("%d",&a[i]);}
		inter(a,n);
}
void inter(int a[],int p)
{int i,min,max,t,k,l;
min=a[0];max=a[1];
for(i=0;i<p;i++){
	if(a[i]<min) {
		min=a[i];t=i;
	}
}
for(i=0;i<p;i++)
{
	if(a[i]>max){
		max=a[i];k=i;
	}
}
printf("the greatest no is a[%d]= %d ,smallest no is a[%d]=%d \n",k,max,t,min);
l=a[t];
a[t]=a[k];
a[k]=l;printf("the interchanged array is \n");
for(i=0;i<p;i++)
{
	printf("a[%d]=%d\n ",i,a[i]);
}
}
