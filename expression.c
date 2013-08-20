# include <stdio.h>
#include <string.h>
int main()
{char arr[400],stack[400];
int i,c=0,sc=0,t;
scanf("%d",&t);
for(t;t;t--)
{
scanf("%s",arr);
for(i=0;i<strlen(arr);i++)
{
if(arr[i]=='('){c++;}
else if ( (arr[i]=='+')||(arr[i]=='-')||(arr[i]=='*')||(arr[i]=='/')||(arr[i]=='^') ) {stack[sc]=arr[i];sc++;}
else if (arr[i]==')'){sc--;printf("%c",stack[sc]);}
else {printf("%c",arr[i]);}
}
printf("\n");
}
return 0;
}