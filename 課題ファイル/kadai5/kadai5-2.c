#include<stdio.h>
int main(void){
  int n,s;
  printf("整数を入れてください");
  scanf("%d",&n);
  while(n>0){
    s=n*n;
    printf("今nは %d ですその２は　%d です\n",n,s);
    n -= 2;
  }
  return 0;
}

	   

    
