#include <stdio.h>

int main(){
  int c;
  printf("EOF: %d", EOF);
  c=getchar();
  while (c != EOF){
    putchar(c);
    c=getchar();
  }
}