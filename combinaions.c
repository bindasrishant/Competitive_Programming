#include <stdio.h>
//void prin(int index,char p[],int n,char arr[]);
 
int main()
{int i,n;
scanf("%d",&n);
char x[n];
char arr[4];

for(i=0;i<n;i++)
{
printf("%c\n",x[i]);
scanf("%c",x[i]);
}
//prin(0,x,n,arr);
return 0;
}
 
/*void prin(int index,char p[],int n,char arr[])
{
if(index==2){printf("%s \n",arr);}
else
{
int i;
for(i=0;i<n;i++)
{
arr[index]=p[i];
prin(index++,p,n,arr);
}
}
}*/