#include <stdio.h>

void sort(int a[1000],int n)
{
int i, pass, hold;
for(pass = 1; pass <= (n-1); pass++)
for(i = 0; i <= (n-2); i++)
if(a[i] > a[i + 1])
{
hold = a[i];
a[i] = a[i + 1];
a[i + 1] = hold;
}

}
 
int main()
{int t,i,n,a[1000],b[1000],sum;
scanf("%d",&t);
for(t;t;t--)
{sum=0;
scanf("%d",&n);
for(i=0;i<n;i++){scanf("%d",&a[i]);}
for(i=0;i<n;i++){scanf("%d",&b[i]);}
//for(i=0;i<n;i++){printf("%d\n",a[i]);}
//for(i=0;i<n;i++){printf("%d\n",b[i]);}
sort(a,n);
sort(b,n);
for(i=0;i<n;i++){sum+=(a[i]*b[i]);}
printf("%d\n",sum);
}
return 0;
}