#include <stdio.h>


int fact(int n)
{
if(n==1){return 1;}
else{
int x=1;
x=n*fact(n-1); 
return x;}
}

int power(int n)
{int z=1;
for(n;n;n--){z=z*2;}
return z;
}

int main()
{int num;
scanf("%d",&num);
printf("%d",(fact(num)+power(num)-num));
return 0;
}