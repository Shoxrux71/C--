#include <stdio.h>

int main() {
    double d, n;
    double tank = 40.0;  // 初期ガソリン量（リットル）

    // ユーザーから移動距離と燃費を入力
    printf("移動距離 (km) を入力してください: ");
    scanf("%lf", &d);

    printf("燃費 (km/l) を入力してください: ");
    scanf("%lf", &n);

    // 使用したガソリン量を計算
    double used_fuel = d / n;

    // 残りのガソリン量
    double remaining_fuel = tank - used_fuel;

    // 残りのガソリンで走行できる距離を計算
    double remaining_distance = remaining_fuel * n;

    // 結果を表示
    printf("残りのガソリン量: %.2f リットル\n", remaining_fuel);
    printf("移動できる距離: %.2f km\n", remaining_distance);

    return 0;
}
