#include <stdio.h>

int main(void) {
    int e, j, m;
    double へいきんてん;
    char せいせき;

    printf("英語の点数をにゅうりょくして下さい: ");
    scanf("%d", &e);
    printf("国語の点数をにゅうりょくして下さい: ");
    scanf("%d", &j);
    printf("数学の点数をにゅうりょくして下さい: ");
    scanf("%d", &m);

    へいきんてん = (double)(e + j + m) / 3.0;

    if (へいきんてん > 80) {
        せいせき = 'A';
    } else if (へいきんてん > 60) {
        せいせき = 'B';
    } else {
        せいせき = 'C';
    }

    printf("へいきんてんは %.1f 点です\n", へいきんてん);
    printf("せいせきは %c です\n", せいせき);

    return 0;
}
