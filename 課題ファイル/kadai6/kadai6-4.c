#include <stdio.h>
int main(void){
  int i,a;
  int wa = 0;
  int seki = 1;

  printf("整数を入力してください: ");
  scanf("%d", &a);

        for (i=1;i<=a;i++){
          wa = wa + i;
          seki = seki *	i;
    }

        printf("合計: %d\n", seki);
        return 0;

}