#include<stdio.h>

int main(void) {
    float height;
    int over170 = 0;  // 170cm va undan balandlar
    int between160_170 = 0;  // 160cm-170cm orasidagilar
    int under160 = 0;  // 160cm dan pastlar
    
    do {
        printf("身長(cm) >");
        scanf("%f", &height);
        
        if (height >= 170) {
            over170++;
        } else if (height >= 160) {
            between160_170++;
        } else if (height > 0) {
            under160++;
        }
    } while(height != 0);
    
    printf("170cm以上：%d\n", over170);
    printf("160cm以上170cm未満：%d\n", between160_170);
    printf("160cm未満：%d\n", under160);
    
    return 0;
}
