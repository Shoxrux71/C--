#include <stdio.h>
int main (void){
  int i;
  i=8;
  do {
    printf("%d\n",i);
    i-=2;
  }
  while(i > 0);
  return 0;
}
