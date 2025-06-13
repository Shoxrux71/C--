// #include <stdio.h>
// int main(void) {
//   int i;
//   i=0;
//   while(i<5) {
//     i++;
//     printf("%d\n",i);
//   }
//   return 0;
// }

// #include <stdio.h>
// int main(void){
//   int no = 1,sum = 0;
//   do {
//     sum += no;
//     no++;}
// while (no <= 5);
// printf("1から5までの和は%dです。\n",sum);
// return 0;
// }

// 2
// #include<stdio.h>
// int main(void){
//   int i;
//   i = 0;
//   while(i<=5){
//     i++;
//     printf("%d\n",i);
//   }
//   return 0;
// }
#include <stdio.h>
int main(void) {
  double x = 2.5;
  while (x < 20.0) {
    x *= 2.0;
    x-=1.0;
    printf("%.1f\n", x);
  }
  return 0;
}