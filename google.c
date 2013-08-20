#include<stdio.h>
void fun(char *a)
{
a++;
*a='a';
}

void main()
{
char *str="hello";

fun(str);
printf("%s",str);
}