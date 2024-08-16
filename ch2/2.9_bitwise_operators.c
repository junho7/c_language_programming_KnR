#include <stdio.h>

unsigned getbits(unsigned x, int p, int n);

int main()
{
  // AND
  int n = 128;
  n = n & 0177;
  printf("%d\n", n);

  // OR
  int x = 0;
  x = x | 0177;
  printf("%d\n", x);

  // complement
  int c = 105; // Binary: 0110 1001
  int p = 4;
  int m = 3;
  unsigned r = getbits(c, p, m);
  printf("%u\n", r);

  unsigned int size = sizeof(unsigned int);
  unsigned int maxPow = 1<<(size*8-1);
  for(int i=0;i<size*8;++i){
    // print last bit and shift left.
    printf("%u",r&maxPow ? 1 : 0);
    r = r<<1;
  }
  printf("\n");
}

unsigned getbits(unsigned x, int p, int n)
{
  return (x >> (p+1-n)) & ~(~0<<n);
}