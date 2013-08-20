#include <stdio.h>
#include <string.h>
int rev(char arr[1000])
{
int i=strlen(arr);

int n;
unsigned long long int zz,sum=0;
for(n=(i-1);n>=0;n--)
{ zz= power(n);
sum+=((arr[n]-'0')* zz);
}
return (sum/10);
}


unsigned long long int power(int x)
{
unsigned long long int prod=10;
 for(x;x;x--)
 {prod*=10;}
 return prod;
 }
 
 int main()
 {
 char x[1000];
 unsigned long long int n,m;
 int t;
 scanf("%d",&t);
 for(t;t;t--)
 {
 scanf("%ull",&n);
 sprintf(x,"%d",n);
 n=rev(x);
 scanf("%ull",&m);
 sprintf(x,"%d",m);
 n+=rev(x);
 sprintf(x,"%d",n);
 printf("%d\n",rev(x));}
 return 0;
 }
 