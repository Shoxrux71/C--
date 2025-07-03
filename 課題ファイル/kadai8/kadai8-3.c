#include <stdio.h>

int main(void) {
    int n[5] = {20, 30, 40, 50, 60};  // Fahrenheitの値
    float t[5];                       // Celsiusの値
    int i;

    // 各n[i]をCelsiusに変換する
    for(i = 0; i < 5; i++) {
        t[i] = (5.0 / 9.0) * (n[i] - 32);
    }

    // 結果を出力する
    printf("FahrenheitからCelsiusへの変換:\n");
    for(i = 0; i < 5; i++) {
        printf("n[%d] = %d°F → t[%d] = %.2f°C\n", i, n[i], i, t[i]);
    }

    return 0;
}