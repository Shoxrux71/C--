#include <stdio.h>

int main() {
    int n, a, q, r;

    printf("正の整数を入力してください: ");
    scanf("%d", &n);

    a = n;

    printf("\n結果:\n");

    // do-while
    do {
        q = a / 2;
        r = a % 2; 
        printf("%d ÷ 2 = %d 余り %d\n", a, q, r);
        a = q; // 
    } while (a > 0); 

    return 0;
}