#include <stdio.h>

int main()
{int x,y;
scanf("%d %d",&x,&y);
printf("%d",(printf("%*c%*c",x,' ',y,' ')));
return 0;
}