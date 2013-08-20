#include <stdio.h>

int main()
{
int i,k,n,x[100],arr[100];
scanf("%d",&n);
scanf("%d",&k);
for(i=0;i<n;i++)
{scanf("%d",&arr[i]);
x[arr[i]]=0;}

/*for(i=0;i<n;i++)
{
if(++x[arr[i]])>(n/k){printf("%d ",arr[i]);}
}*/
return 0;
}