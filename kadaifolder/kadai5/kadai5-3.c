#include <stdio.h>
int main (void){
  int count;
  double x;
  x = 100;
  count = 0;
  do {
    x/=2;
    count ++;
    printf("%d%8.4f\n",count,x);
  }
  while (x>1.0);
  return 0;
}
