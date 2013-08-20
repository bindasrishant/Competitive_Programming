#include <stdio.h>
int count=0;
 
void m_sort(int x[], int y[], int l, int r)
{
  int m;
 
  if (r > l)
  {
    m = (r + l) / 2;
    m_sort(x, y, l, m);
    m_sort(x, y, m+1, r);
 
    mer(x, y, l, m+1, r);
  }
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
{int n;
int a[100000],b[100000];
scanf("%d",&n);
for(n;n;n--){scanf("%d",&a[n]);}
m_sort(a,b,0,n-1);
for(n;n;n--){printf("%d",b[n]);}
return 0;
}