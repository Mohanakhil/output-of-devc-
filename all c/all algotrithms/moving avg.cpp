#include<stdio.h>
int main()
{
int a[10],i=0,j,temp=0;

float avg;
scanf("%d",&temp);

while(temp!=-1)
{a[i]=temp;

i=i+1;

scanf("%d",&temp);

}

for(j=0;j<i-1;j++)
{ avg=(a[j]+a[j+1])/2.0;
printf("%.1f ",avg);
}
}
