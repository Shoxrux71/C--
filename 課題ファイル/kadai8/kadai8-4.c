#include <stdio.h>

int main(void) {
    int v[5] = {11, 16, 10, 12, 14};  // 配列の初期化
    int sum = 0;
    int i;

    // 要素を合計する
    for(i = 0; i < 5; i++) {
        sum += v[i];
    }

    // 結果を出力する
    printf("v[0]からv[4]の合計: %d\n", sum);

    return 0;
}