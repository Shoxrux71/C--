#include <stdio.h>

int main() {
    int a;
    int wa = 0;      
    int seki = 1;   

    printf("整数を入力してください: ");
    scanf("%d", &a);

    // Faqat musbat juft sonlar uchun hisoblash
    if (a > 0 && a % 2 == 0) {
        for (int i = 2; i <= a; i += 2) {
            wa += i;
            seki *= i;
        }

        printf("偶数の合計: %d\n", wa);
        printf("偶数の積: %d\n", seki);
    } else {
        printf("正の偶数を入力してください。\n");
    }

    return 0;
}