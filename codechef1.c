#include <stdio.h>
#include <math.h>

int prime(int a)
{
   int c;
   for ( c = 2 ; c <= (int)sqrt(a)  ; c++ )
   { 
     if ( a%c == 0 )
	 return 0;
   }
   if ( c == a )
      return 1;
}

int sum(int x)
{
int z=0;
while(x)
{
z+=(x%10);
x/=10;
}
return z;
}
int main()
{
int data[10000];
int t,i,u,l;
for(u=0;u<10001;u++){data[u]=0;}
scanf("%d",&t);
while(t)
{t--;
scanf("%d %d",&u,&l);
for(u;u<=l;u++)
{
}
}
return 0;
}