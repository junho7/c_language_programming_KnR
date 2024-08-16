#include <stdio.h>

void squeeze(char s[], int c);
void strcatex(char s[], char t[]);

int main()
{
  char s[] = "0102030405";
  char t[] = "ttttt";
  int c = '0';
  squeeze(s, c);
  strcatex(s, t);
}

void squeeze(char s[], int c)
{
  int i, j;

  for (i = j = 0; s[i] != '\0'; i++)
    if (s[i] != c)
      s[j++] = s[i];
  s[j] = '\0';
  printf("%s\n", s);
}

void strcatex(char s[], char t[])
{
  int i, j;

  while (s[i] != '\0')
    i++;
  while ((s[i++] = t[j++]) != '\0')
    ;

  printf("%s\n", s);

}