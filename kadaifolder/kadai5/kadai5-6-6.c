#include<stdio.h>
int main(void){
  int j,k;
  for (j=1;j<=14;j++){
    for(k=1;k<j;k++)printf("*");
    for(k=j;k<3;k++)printf("* ");
    for(k=2;k<j;k++)printf("+");
    for(k=3;k<j;k++)printf("!");
    printf("\n");
  }
  return 0;
}
