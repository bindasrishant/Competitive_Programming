#include<stdio.h>

int main()
{
char inp[100];
scanf("%[^\n]",inp);
int i,a;
i=a=0;

while(inp[i]!='\0')
{
//printf("%d %d %s\n",i,a,inp);
if(inp[i]==' '){i++;}
if(i!=a){inp[a]=inp[i];}
a++;
i++;
}
inp[a]='\0';
printf("%s\n",inp);
return 0;
}