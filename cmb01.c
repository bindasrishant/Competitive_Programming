#include <stdio.h>

int main()
{int a,b,x1,x2,y1,y2;
scanf("%10d",&a);
scanf("%10d",&b);
x1=a/100000;x2=b/100000;
y1=a%100000;y2=b%100000;
x1=x1+x2;
y1=y1+y2;
x2=y1/100000;
y1=y1%100000;
x1=x1+x2;
//if(x1){printf("%d",x1);}printf("%d",y1);
printf("%10d",x1*100000+y1);
return 0;
}
