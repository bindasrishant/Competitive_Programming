#include <stdio.h>

int main()
{int x,*y,**z,***a;
x=300;
printf("%d\n",y);
y=&x;
z=&y;
a=&z;
printf("%d\n",y);
printf("%d\n",*y);
printf("%d\n",z);
printf("%d\n",*z);
printf("%d\n",**z);
printf("%d\n",a);
printf("%d\n",*a);
printf("%d\n",**a);
printf("%d\n",***a);
return 0;
}