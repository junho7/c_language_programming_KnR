#include <stdio.h>

int bitcount(unsigned x);

int main()
{
  int res;
  int x = 10; //binary 1010
  res = bitcount(x);
  printf("%d\n", res);
}

int bitcount(unsigned x)
{
  int b;
  for (b = 0; x != 0; x >>= 1)
    // if (x & 01)
    // if (x & 1)
    if (x == 1)
      b++;
  return b;
}