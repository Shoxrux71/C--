#include <stdio.h>
int main (void){
  int m;
  do {
    printf("1,2,3,4 のどれかを入れてください: ");
    scanf("%d",&m);
  }while (m<1 || m > 4);
  switch (m) {
  case 1 : printf("spexial memmber\n");
    break;
  case 2 : printf("regular member\n");
    break;
  case 3 :  printf("graduate student member\n");
    break;
  case 4 : printf("undergraduate member\n");
  }
  return 0;
}
      
