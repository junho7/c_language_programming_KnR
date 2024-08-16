#include <stdio.h>
#define MAXLINE 1000

int max;
char line[MAXLINE];
char longest[MAXLINE];

// getline is already define in stdio.h
// void can be omitted
// int getlineX(void);
// void copy(void);
int getlineX();
void copy();

int main()
{
  int len;
  extern int max;
  extern char longest[];

  max = 0;
  while ((len = getlineX()) > 0)
    if (len > max)
    {
      max = len;
      copy();
    }
  if (max > 0)
    printf("%s", longest);
  return 0;
}

// void can be omitted
// int getlineX(void)
int getlineX()
{
  int c, i;
  extern char line[];

  for (i = 0; i < MAXLINE - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
    line[i] = c;
  if (c == '\n')
  {
    line[i] = c;
    ++i;
  }
  line[i] = '\0';
  return i;
}

// void can be omitted
// void copy(void)
void copy()
{
  int i;
  extern char line[], longest[];
  i = 0;
  while ((longest[i] = line[i]) != '\0')
    ++i;
}