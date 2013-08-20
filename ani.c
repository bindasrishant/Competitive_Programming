#include <stdio.h>

int main()
{int j,i;
 char x[]="|€+^^€600u+0|";
 printf("%s\n",x);
 for(i=0;i<128;i++)
 {for(j=0;j<13;j++){x[j]++;x[j]=x[j]%127;}
 printf("%s\n",x);
 }
 return 0;
 }