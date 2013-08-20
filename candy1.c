#include <stdio.h>

int main()
{int i,n,arr[10000],sum,avg;
scanf("%d",&n);
while(n!=(-1))
{sum=0;avg=0;
for(i=0;i<n;i++)
{scanf("%d",&arr[i]);
sum=sum+arr[i];}
if((sum%n)){printf("-1\n");}
else
{avg=sum/n;sum=0;
for(i=0;i<n;i++){if(arr[i]>avg){sum=sum+(arr[i]-avg);}}
printf("%d\n",sum);}
scanf("%d",&n);
}
return 0;
}