#include <stdio.h>

int main() {
    int hour, minute;  // 時間と分を格納する変数
    
    // ユーザーに入力を求める
    printf("24時間形式で時間を入力してください (HH:MM): ");
    scanf("%d:%d", &hour, &minute);
    
    // 入力値のチェック
    if (hour < 0 || hour > 23 || minute < 0 || minute > 59) {
        printf("無効な時間です！\n");
        return 1;  // エラーコードで終了
    }
    
    // 12時間形式に変換して表示
    printf("12時間形式: ");
    printf("%02d:%02d %s\n", 
           hour == 0 ? 12 : hour > 12 ? hour - 12 : hour,  // 時間変換
           minute,  // 分はそのまま
           hour < 12 ? "午前" : "午後");  // AM/PMの代わりに午前/午後
    
    return 0;
}
