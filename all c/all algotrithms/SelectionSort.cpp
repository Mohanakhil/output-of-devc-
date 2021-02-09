#include<stdio.h>
void selectionSort(int a[],int n)
{ int min=a[0],i,j,temp,t;
for(i=0;i<(n-2);i++)
{ min=a[i];
for(j=i+1;j<n;j++)
{
	if(a[j]<min) 
	{
	min=a[j];temp=j;
}
 } 
 
 t=a[i];
 a[i]=min;
 a[temp]=t;
 }
for(i=0;i<n;i++)
{printf("%d ",a[i]);
}

}
int main()
{int a[100],i,n;
printf("eneter no of ele\n");
scanf("%d",&n);
for(i=0;i<n;i++)
{scanf("%d",&a[i]);
}
selectionSort(a,n);
}
