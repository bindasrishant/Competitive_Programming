#include <stdio.h>
int arrmax(int a[],int b);
int main()
{
int m=0;
int x[]={0,8,9,2,123,-12,23};
printf("%d\n",sizeof(x)/4);
m=arrmax(x,sizeof(x)/4);
printf("\n%d",m);
return 0;
}

int arrmax(int x[],int n)
{int i,temp=0,m=0;
for(i=0;i<n;i++)
{
if (x[i]>temp)
{temp=x[i];
m=i;
}}
return x[m];
}