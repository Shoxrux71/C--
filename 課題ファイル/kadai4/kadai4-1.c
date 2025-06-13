#include <stdio.h>

int main(void) {
    int age;
    printf("何歳ですか? "); // 何歳ですか
    scanf("%d", &age);

    if (age > 6 && age <= 64) {
      printf("100円です\n"); // 100 円
    } else {
        printf("無料です\n"); // 無料です
    }

    return 0;
}
