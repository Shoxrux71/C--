#include <stdio.h>

int main() {
    int a, b, c; // こくご, えいご, すうがく の てんすう
    int hyouka;  // ひょうかてん
    int max;     // さいこうてん
    
    // てんすう の にゅうりょく
    printf("こくご の てんすう：");
    scanf("%d", &a);
    printf("えいご の てんすう：");
    scanf("%d", &b);
    printf("すうがく の てんすう：");
    scanf("%d", &c);
    
    // さいこうてん の けんさく
    max = a;
    if (b > max) max = b;
    if (c > max) max = c;
    
    // ひょうかてん の けいさん
    hyouka = max * 2;
    if (max == a) {
        hyouka += b + c;
    } else if (max == b) {
        hyouka += a + c;
    } else {
        hyouka += a + b;
    }
    
    // ごうかく か ふごうかく の はんてい
    if (hyouka >= 240 && a >= 40 && b >= 40 && c >= 40) {
        printf("ひょうかてん は %d てん で ごうかく\n", hyouka);
    } else {
        printf("ひょうかてん は %d てん で ふごうかく\n", hyouka);
    }
    
    return 0;
}
