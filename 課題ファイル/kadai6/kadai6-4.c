#include <stdio.h>
int main(void){
  int i,a;
  int wa = 0;
  int seki = 1;

  printf("please enter an  integer: ");
  scanf("%d", &a);

        for (i=1;i<=a;i++){
          wa = wa + i;
          seki = seki *	i;
	}

        printf("Sum: %d\n", seki);
        return 0;

}

