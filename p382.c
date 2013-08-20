#include <stdio.h>
int f(int a[],int n)
{
int max=0,i,j,cur;
for(i=0;i<n;i++)
 { cur=0;
   for(j=i;j<n;j++)
   { cur+=a[j];
    if(cur>max) max=cur;
   }
  }
return max;
}

int main()
{
int a[]={2,-341,2,3,560,-45,-34,33};
printf("%d",f(a,8));
return 0;
}