#include <stdio.h>

int main()
{
unsigned long int n,m,t;
scanf("%ul",&t);
for(t;t;t--)
{
scanf("%ul",&n);

if(n==1){printf("poor conductor\n");}
else
{n=n-2;
m=(n/5)+1;
switch(n%10)
{
case 0:
case 9: printf("%d W L\n",m);break;
case 1:
case 8: printf("%d A L\n",m);break;
case 2:
case 7: printf("%d A R\n",m);break;
case 3:
case 6: printf("%d M R\n",m);break;
case 4: 
case 5: printf("%d W R\n",m);break;
default:printf("error\n");break;
}
}
}
return 0;
}