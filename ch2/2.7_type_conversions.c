#include <stdio.h>

int atoi(char s[]);
int lower(int);

int atoi(char s[])
{
  int i, n;

  n = 0;

  for (i = 0; s[i] >= '0' && s[i] <= '9'; ++i)
  {
    n = n * 10 + s[i] - '0';
  }

  return n;
}

int lower(int s)
{
  if (s >= 'A' && s <= 'Z')
   return s + ('a' - 'A');
    // return s + 32;
  else
    return s;
}

int main()
{
  int res_atoi = atoi("123456789");
  printf("%d\n", res_atoi);
  int res_lower = lower('B');
  printf("%c\n", res_lower);
}