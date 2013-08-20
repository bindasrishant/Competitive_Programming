#include <stdio.h>

int main()
{
int i,k,j,inp[100],n,tmp=0;
scanf("%d",&n);
for(i=0;i<n;i++)
{scanf("%d",&inp[i]);}
for(i=0;i<n;i++)
{printf("%d ",inp[i]);}
printf("\n");
for(j=1;j<n;j++)
{
	for (i=0;i<=j;i++)
	{
		if(inp[i]>inp[j])
		{tmp=inp[j];
		 for(k=j;k>i;k--)
		 {inp[k]=inp[k-1];
		 }
		 inp[i]=tmp;
		}
	}
}
for(i=0;i<n;i++)
{printf("%d\n",inp[i]);}
return 0;
}