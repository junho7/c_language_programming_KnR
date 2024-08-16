#include <stdio.h>

int binsearch(int x, int v[], int n);

int binsearch(int x, int v[], int n)
{
  int low, high;
  low = 0;
  high = n - 1;
  while (low <= high)
  {
    int mid = (low + high) / 2;
    if (x < v[mid])
      high = mid - 1;
    else if (x > v[mid])
      low = mid + 1;
    else
      return mid;
  }

  return -1;
}

int main()
{
  int x = 5;
  int v[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int r = binsearch(x, v, 10);
  printf("%d\n", r);
}