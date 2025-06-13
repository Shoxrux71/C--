#include<stdio.h>

int main(void) {
    int vanncount, strawcount, chococount;
    int vanilla = 180;
    int strawberry = 200;
    int chocolate = 230;
    float tax = 1.10;

    // ユーザーに個数を尋ねる
    printf("バニラアイスの個数を入力してください: ");
    scanf("%d", &vanncount);

    printf("ストロベリーアイスの個数を入力してください: ");
    scanf("%d", &strawcount);

    printf("チョコレートアイスの個数を入力してください: ");
    scanf("%d", &chococount);

    // 合計金額を計算（税金込み）
    float total = (vanncount * vanilla + strawcount * strawberry + chococount * chocolate) * tax;

    // 結果を表示
    printf("合計金額（税込10%%）: %.0f 円\n", total);

    return 0;
}
  

