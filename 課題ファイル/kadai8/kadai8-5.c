#include <stdio.h>

int main(void) {
    double height[5];  // 5人の身長
    double sum = 0.0, average;
    int i;

    // 身長を入力する
    printf("5人の身長を入力してください（cm単位）:\n");
    for(i = 0; i < 5; i++) {
        printf("Person %d: ", i);
        scanf("%lf", &height[i]);
        sum += height[i];  // 合計に加える
    }

    // 平均値を計算する
    average = sum / 5.0;

    // 結果を出力する
    printf("\n平均身長: %.2f cm\n", average);

    return 0;
}