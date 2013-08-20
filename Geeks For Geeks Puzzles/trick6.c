//printing a range of numbers without loop and if

#include <stdio.h>
void print(int n);
/*int main ()
{
print(1000);
return 0;
}

void print(int n)
{int x=3;
//----------------------//
x=x/n;
//------------------------//
printf("%d\n",n);
print(n-1);
}*/

/* Solution 2
#include <stdio.h>
int i = 0;
p()    { printf("%d\n", ++i); }
a()    { p();p();p();p();p(); }
b()    { a();a();a();a();a(); }
c()    { b();b();b();b();b(); }
main() { c();c();c();c();c();c();c();c(); return 0; }
*/


//- printing but using if



int main ()
{
print(1000);
return 0;
}

void print(int n)
{
printf("%d\n",n);
if(n>=0){print(n-1);}
}


