#include <stdio.h>
int roundnum(float x);
int main()
{float y;
scanf("%f",&y);
printf("%d",roundnum(y));

return 0;
}

int roundnum(float x)
{
return x > 0 ? x + 0.5 : x - 0.5 ;
}