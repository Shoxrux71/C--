#include <stdio.h>

int main() {
    int ball, totalPoints = 0, numberOfPeople = 0;
    float average;

    while (1) {
        printf("点数を入力してください > ");
        scanf("%d", &ball);

        if (ball < 0)
            break;

        totalPoints += ball;
        numberOfPeople++;
    }

    if (numberOfPeople > 0) {
        average = (float)totalPoints / numberOfPeople;
        printf("人数: %d\n", numberOfPeople);
        printf("合計点数: %d\n", totalPoints);
        printf("平均点数: %.1f\n", average);
    } else {
        printf("点数が入力されませんでした。\n");
    }

    return 0;
}