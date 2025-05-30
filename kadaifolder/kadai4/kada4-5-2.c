#include<stdio.h>

int main(void) {
    int a, b;
    a = 3;
    b = 2;

    if (a > b) {
        b = a;
    }

    printf("%d\n", b);
    return 0;
}
