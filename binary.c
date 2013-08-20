# include <stdio.h>

int main()
{
int i,n,count,power,tmp,num,x;
count=0;x=1;power=0;
int arr[100]={0};
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&num);
tmp=num;count=0;
while(num>0)
{x=1;power=0;
while((num/2)>0 )
{
x=x*2;
power++;
num=num/2;
}
printf("x--> %d\n",power);
arr[power]=1;
num=tmp-x;
tmp=num;
count++;
}
printf("%s\n",arr);
}
return 0;
}