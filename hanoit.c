#include <stdio.h>
void move(int n,char from,char to,char temp)
{
if(n==1){printf("Moving disk 1 from tower %c to %c \n",from,to); return;}
else
{
move(n-1,from,temp,to);
printf("Moving disk %d from %c to %c \n",n,from,to);
move(n-1,temp,to,from);
}
}
int main()
{char a='a',b='b',c='c';
int n;
scanf("%d",&n);
move(n,a,c,b);
return 0;
}