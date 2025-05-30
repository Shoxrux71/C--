#include <stdio.h>
#include <math.h>

int main(void) {
    int A_win, A_lose;
    int B_win, B_lose;
    int A_sum, B_sum;
    double game_diff;

    // ユーザーからデータを取得
    printf("A チームの勝利数: ");
    scanf("%d", &A_win);
    printf("A チームの敗北数: ");
    scanf("%d", &A_lose);

    printf("B チームの勝利数: ");
    scanf("%d", &B_win);
    printf("B チームの敗北数: ");
    scanf("%d", &B_lose);

    // スコアを計算
    A_sum = A_win - A_lose;
    B_sum = B_win - B_lose;

    // 上位を決定しゲーム差を計算
    if (A_sum > B_sum) {
        // 特別なケースをチェック
        if (A_lose == B_win && A_sum == B_sum) {
            game_diff = A_lose; // または B_win
        } else {
            game_diff = (double)(A_sum - B_sum) / 2.0;
        }
        printf("A チームが上位です\n");
        printf("ゲーム差 %.1f\n", game_diff);
    }
    else if (B_sum > A_sum) {
        if (B_lose == A_win && B_sum == A_sum) {
            game_diff = B_lose; // または A_win
        } else {
            game_diff = (double)(B_sum - A_sum) / 2.0;
        }
        printf("B チームが上位です\n");
        printf("ゲーム差 %.1f\n", game_diff);
    }
    else {
        // スコアが同じ場合
        printf("チームは同率です\n");
        game_diff = fabs((double)(A_sum - B_sum)) / 2.0;
        printf("ゲーム差 %.1f\n", game_diff);
    }

    return 0;
}