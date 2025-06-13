#include <stdio.h>

int main(void) {
    int x, y, z, w;
    x = 2;
    y = 5;
    z = 1;

    if (x > y) {
        w = y - y;
    }
    else if (y > z) {
        w = y - z;
    }
    else {
        w = z - x;
    }

    printf("%d\n", w);
    return 0;
}
    
