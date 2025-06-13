#include<stdio.h>

int main(void)
{
    int n, i;
    double totalPrice;
    const int unitPrice = 600;

    // 商品の数を入力
    printf("商品の数を入力してください: ");
    scanf("%d", &n);

    // 税率ごとの合計金額
    printf("税率ごとの合計金額:\n");
    for (i = 1; i <= 20; i++) {
        totalPrice = unitPrice * n * (1 + i / 100.0); 
        printf("%d%% 税率: %.2f 円\n", i, totalPrice); 
    }

    return 0;
}