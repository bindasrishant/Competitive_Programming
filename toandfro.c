//TOANDFRO/
#include <stdio.h>
#include <string.h>

void reverse(int i,int j,int count,char str[200])
{char temp;
for(count;count;count--)
{
	temp = str[j];
	str[j] = str[i];
	str[i] = temp;
	j--;i++;
}
}

int main()
{
int a,b,len,i,j;
char x[200],y[200];
scanf("%d",&a);
while(a!=0)
{
scanf("%s",x);
len=strlen(x);
b=len/a;
for(i=0;i<len;i=i+b)
{y=substrin

}
scanf("%d",&a);
}
return 0;
}