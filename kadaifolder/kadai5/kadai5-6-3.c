#include <stdio.h>
int main(void){
  int i = 0,n=0;
  while(i<10){
    n+=i;
    i++;
    if(n>10)break;
  }
  printf("%d\n",i);
  return 0;
}
