#include <stdio.h>

int main(void) {
    int x, y, z;
    x = 28;
    y = 5;
    z = x % y;

    switch(z) {
        case 0:
        case 1:
            printf("グー\n");
            break;
        case 2:
            printf("チョキ\n");
            break;
        default:
            printf("パー\n");
    }

    return 0;
}
		
