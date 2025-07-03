#include <stdio.h>

int main() {
    int i;
    int r1, r2, r3; 
    int cheapest_price;
    char *cheapest_plan;

    for (i = 1; i <= 10; i++) {
        r1 = 3000 + 1300 * i;
        r2 = 5000 + 700 * i;
        r3 = 7000 + 400 * i;

        cheapest_price = r1;
        cheapest_plan = "料金プラン1";

        if (r2 < cheapest_price) {
            cheapest_price = r2;
            cheapest_plan = "料金プラン2";
        }

        if (r3 < cheapest_price) {
            cheapest_price = r3;
            cheapest_plan = "料金プラン3";
        }

        printf("時間: %d → 最安プラン: %s, 金額: %d円\n", i, cheapest_plan, cheapest_price);
    }

    return 0;
}