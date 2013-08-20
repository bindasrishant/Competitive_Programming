#include<stdio.h>
#include<string.h>
int main()
{
int n,i,j,r,c;
i=j=0;
scanf("%d",&c);
char str[201];
scanf("%s",str);
n=strlen(str);
r=n/c;
char arr[r][c];
strcpy(arr,str);
return 0;
}