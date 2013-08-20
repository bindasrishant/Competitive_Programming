#include<stdio.h>
int x(int n)
{if(n==10){return -1;}
if(n==3){return -2;}
else {return x(n+1);}
}
int main()
{
printf("%d",x(0));

return 0;
}