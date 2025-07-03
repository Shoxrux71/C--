#include <stdio.h>

int main(void) {
    int i, j, height;

    printf("三角形を作成します。\n");
    printf("高さ: ");
    scanf("%d", &height);

    for (i = 1; i <= height; i++) {
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}