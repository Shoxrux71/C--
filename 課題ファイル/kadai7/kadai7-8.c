#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    int target;      // コンピュータが選んだランダムな数
    int guess;       // ユーザーが入力した数
    int attempts = 0; // 試行回数

    // ランダムな数を生成する準備
    srand((unsigned int)time(NULL));
    target = rand() % 100 + 1; // 1から100までの数

    printf("コンピュータが1から100の間の数を生成しました。\n");

    while (attempts < 6) {
        printf("いくつですか (1-100): ");
        scanf("%d", &guess);

        attempts++;  // 試行回数を増やします

        if (guess == target) {
            printf("当たり\n");
            printf("あなたの勝ちです\n");
            break;  // 正解 — ゲーム終了
        } else if (guess < target) {
            printf("もっと大きい\n");
        } else {
            printf("もっと小さい\n");
        }

        if (attempts == 6) {
            printf("あなたの負けです\n");
        }
    }

    return 0;
}