# include <stdio.h>
#include <string.h>
# include <ctype.h>
int check(int i,char arr[])
{int tmp;
tmp=arr[i]-'0';
if(arr[i-1]=='-'){return (tmp*(-1));}
else return tmp;
}
void prin(int a,int b,int c)
{
}


int main()
{int i,n;
int nox,noi,no[3];nox=noi=0;
no[0]=no[1]=no[2]=999;
char inp[15];
scanf("%d",&n);
for(n;n;n--)
{scanf("%s",inp);
for(i=0;i<(strlen(inp));i++){if(inp[i]=='x'){nox++;}else if(isdigit(inp[i])){no[noi]=check(i,inp);noi++;}}
for(i=0;i<(noi);i++){printf("%d ",no[i]);} 
printf("\n--\n");
}
return 0;
}