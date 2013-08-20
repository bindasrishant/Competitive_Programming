# include <stdio.h>

int main()
{
int n,k,c;
register int tmp=0;
int *x;
x=&tmp;
scanf("%d %d",&n,&k);
c=0;
for(n;n;n--){scanf("%d",*x); if(!(((*x)%k)==0))c++;}
printf("%d",c);
return 0;
}