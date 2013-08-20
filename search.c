#include <stdio.h>
int find(int arr[],int s,int e,int num);


int main()
{
int n,i;
int arr[99999];
scanf("%d",&n);
for(i=0;i<n;i++){scanf("%d",&arr[i]);}
printf("%d",find(arr,0,(n-1),3));
return 0;
}



int find(int arr[],int s,int e,int num)
{ 
int mid;
mid=(e-s+1)/2;
if(num>arr[mid]){return find(arr,mid+1,e,num);}
else if (num < arr[mid]){return find(arr,s,mid-1,num);}
else return mid;

}