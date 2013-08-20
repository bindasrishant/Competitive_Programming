#include <stdio.h>
int count=0;
 
void m_sort(int x[], int y[], int l, int r)
{// printf("%d %d \n",l,r);
  int m;
 
  if ( r > l)
  {
    m = (r + l) / 2;
	
    m_sort(x, y, l, m);
	
    m_sort(x, y, m+1, r);
	
    mer(x, y, l, m+1, r);
  }
 // else {printf("zzz\n");}
}
 
void mer(int numbers[], int temp[], int left, int mid, int right)
{
  int i, left_end, num_elements, tmp_pos;
 
  left_end = mid - 1;
  tmp_pos = left;
  num_elements = right - left + 1;
 
  while ((left <= left_end) && (mid <= right))
  {
    if (numbers[left] <= numbers[mid])
    {
      temp[tmp_pos] = numbers[left];
      tmp_pos = tmp_pos + 1;
      left = left +1;
    }
    else
    {
      temp[tmp_pos] = numbers[mid];
      tmp_pos = tmp_pos + 1;
      mid = mid + 1;
    }
  }
 
  while (left <= left_end)
  {
    temp[tmp_pos] = numbers[left];
    left = left + 1;
    tmp_pos = tmp_pos + 1;
  }
  while (mid <= right)
  {
    temp[tmp_pos] = numbers[mid];
    mid = mid + 1;
    tmp_pos = tmp_pos + 1;
  }
 
  for (i=0; i <= num_elements; i++)
  {
    numbers[right] = temp[right];
    right = right - 1;
  }
}

int main()
{int n,i,check;
int a[100000],b[100000];
scanf("%d",&n);

while(n!=0)
{check=0;++n;a[0]=0;
for(i=1;i<n;i++){scanf("%d",&a[i]);}
m_sort(a,b,0,(n-1));

for(i=1;i<n;i++){if((b[i]-b[i-1])>200){check=1;break;}}
if((2*(1422-a[n-1]))>200){check=1;}
if(!check){printf("POSSIBLE\n");}else{printf("IMPOSSIBLE\n");}
scanf("%d",&n);
}
return 0;
}