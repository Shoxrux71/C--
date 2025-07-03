#include <stdio.h>

int main(void) {
    int data[9];
    int i;

    // ユーザーから9つの整数を入力してもらう
    printf("9つの整数を入力してください:\n");
    for(i = 0; i < 9; i++) {
        printf("data[%d]: ", i);
        scanf("%d", &data[i]);
    }

    // 3x3の形式で出力する
    printf("\n入力された値:\n");
    for(i = 0; i < 9; i++) {
        printf("%d\t", data[i]);  // 数値を出力
        if ((i + 1) % 3 == 0) {
            printf("\n");  // 3つの要素ごとに改行
        }
    }

    return 0;
}