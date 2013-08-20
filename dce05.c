#include <stdio.h>

int main()
{int n,x,num;
scanf("%d",&n);
for(n;n;n--)
{x=1;scanf("%d",&num);
while((num=num/2))
{//num=num/2;
x=x*2;
}
printf("%d\n",x);
}
return 0;
}