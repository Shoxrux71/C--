#include <stdio.h>
int main (void){
  int m;
  do {
    printf("1、2、3、4 のどれかを入力してください: ");
    scanf("%d",&m);
  }while (m < 1 || m > 4);
  
  switch (m) {
  case 1:
    printf("スペシャルメンバーです。\n");
    break;
  case 2:
    printf("レギュラーメンバーです。\n");
    break;
  case 3:
    printf("大学院生メンバーです。\n");
    break;
  case 4:
    printf("学部生メンバーです。\n");
    break;
  }
  
  return 0;
}

      
