#include<stdio.h>
#include<stdlib.h>
main()
{int a[20],i,n,j;
printf("enter no of ele\n");
scanf("%d",&n);
for(i=0;i<n;i++)
{printf("enter ele\n");
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{for(j=i+1;j<n;j++)
{if(a[i]==a[j]) 
{a[j]=0;
}
}
}
printf("after removing dup\n");
for(i=0;i<n;i++)
{printf("%d ",a[i]);

}

}
