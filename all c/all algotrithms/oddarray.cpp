#include<stdio.h>
int find_odd(int a[],int n,int k)
{ int count=0,j=-1;
printf("you requre %d odd no\n",k);
for(int i=0;i<n;i++)
{ 
if(a[i]%2!=0)
{ count++;
if(count==k) 
{ j=i;
break;}

 printf("\ncount =%d \n",count);
}

}
printf("%d ",a[j]);
	return 0;
}
int main()
{int a[10],i=0,k,temp;
scanf("%d",&k);
scanf("%d",&temp);
while(temp!=-1)
{a[i]=temp;
i++;
scanf("%d",&temp);
}
find_odd(a,i,k);
}
