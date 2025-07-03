#include <stdio.h>

int main() {
    int num;
    int product = 1;

    while (1) { // 無限ループ — ユーザーが負の数を入力した場合、ループを終了します
        printf("自然数を入力してください: ");
        scanf("%d", &num);

        if (num < 0) {
            break; // 負の数が入力された場合、ループを終了します
        }

        product *= num; // 数を積に掛けます
    }

    printf("自然数の積: %d\n", product);

    return 0;
}