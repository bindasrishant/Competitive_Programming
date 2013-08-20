#include <stdio.h>
#include <string.h>

int locate(char y[5],char code[100000][5])
{int z;
for(z=100000;z>0;z++)
{if(!strcmp(code[z],y)){return z;}
else {return -1;}
}
}

void replace(int a,int b,int loc[100000],int n)
{
for(n;n;n--)
	{
	if(loc[n]==a)
				{
				loc[n]=b;
				}
	}
}


int locates(int aa,int bb,int dob[100000],int intcode[100000],int n)
{
for(n;n;n--)
{if(dob[n]==aa)
{if (intcode[n]==bb) {return n;} else {continue;}}
}
}

int main()
{ int t,n,cd,r,xx,track=0;
int dob[100000],intcode[100000],loc[100000];
char code[100000][5];
char tmp[5];char aaa[5],bbb[5];
scanf("%d",&t);
for(t;t;t--)
{
scanf("%d",&n);
for(n;n;n--)
{scanf("%6d%5d %s",&dob[n],&intcode[n],tmp);
xx=locate(tmp,code);
strncpy(code[track],tmp,5);
loc[n]=track;
track++;
}
scanf("%d",&cd);
for(cd;cd;cd--)
{
scanf("%s %s",aaa,bbb);
replace(locate(aaa,code),locate(bbb,code),loc,track);
}
scanf("%d",&r);
for(r;r;r--)
{
scanf("%6d%5d",&t,&n);
xx=locates(t,n,dob,intcode,track);
printf("%d%d %s\n",dob[xx],intcode[xx],code[loc[xx]]);
}
printf("\n");
}
return 0;
}




