#include <stdio.h>
//spoj

unsigned int compute(unsigned int b[10],unsigned int c[10],unsigned int n,unsigned int k,unsigned int log[100])//00][10000])
{unsigned int yy,i,sum=0l;
if(log[n]==(-2)){
if(n<=k)
{yy=(b[n]%100000);yy=yy%10000;
log[n]=yy;
 return yy;}
else
{
for(i=1;i<=k;i++)
{sum=sum+(c[i]*((compute(b,c,n-i,k,log)%100000)%10000));
yy=sum;
yy=yy%100000;yy=yy%10000; }
log[n]=yy;
return yy;
}
}
else
{
return log[n];
}
}

int main()
{
int t;

unsigned int ans,m,n,k;
unsigned int b[10],c[10],log[100];
for(m=0;m<100;m++)/*{for(ans=0;ans<10000;ans++){*/log[m]/*[ans]*/=(-2);//}};
scanf("%d",&t);
for(t;t;t--)
{
scanf("%u",&k);
for(n=1;n<=k;n++){scanf("%u",&b[n]);}
for(n=1;n<=k;n++){scanf("%u",&c[n]);}
scanf("%u",&m);
ans=compute(b,c,m,k,log);
//ans=m;
printf("%u\n",ans);

}
for(t=0;t<m;t++){printf("%d\n",log[t]);}
return 0;
}