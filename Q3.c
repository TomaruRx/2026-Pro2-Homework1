// 3.りんご1個100円，オレンジ1個88円，苺1パック398円で販売されている．各購入数を入力し，合計金額を表示するプログラム(これらの価格は税込み価格)
#include<stdio.h>
int main(void){
    int apple,orange,berry;
    int x,y,z,sum;
    float temp; // 確認用

    apple = 100;
    orange = 88;
    berry = 398;
    
// --- りんごの入力 ---
    while (1) {
        printf(" \x1b[36mりんご\x1b[39m:");
        if (scanf("%f", &temp) == 1) {
            if (temp < 0) {
                printf("  エラー：負の数は入力できません。\n");
            } else if (temp != (int)temp) {
                printf("  エラー：小数は入力できません。\n");
            } else {
                x = (int)temp;
                break;
            }
        }
        while(getchar() != '\n'); // 入力バッファをクリア（文字入力対策）
    }

    // --- オレンジの入力 ---
    while (1) {
        printf(" \x1b[36mオレンジ\x1b[39m:");
        if (scanf("%f", &temp) == 1) {
            if (temp < 0) {
                printf("  エラー：負の数は入力できません。\n");
            } else if (temp != (int)temp) {
                printf("  エラー：小数は入力できません。\n");
            } else {
                y = (int)temp;
                break;
            }
        }
        while(getchar() != '\n');
    }

    // --- 苺の入力 ---
    while (1) {
        printf(" \x1b[36m苺\x1b[39m:");
        if (scanf("%f", &temp) == 1) {
            if (temp < 0) {
                printf("  エラー：負の数は入力できません。\n");
            } else if (temp != (int)temp) {
                printf("  エラー：小数は入力できません。\n");
            } else {
                z = (int)temp;
                break;
            }
        }
        while(getchar() != '\n');
    }
    if (x < 0) x = 0;
    if (y < 0) y = 0;
    if (z < 0) z = 0;

    sum = apple*x + orange*y + berry*z;
    printf("合計は\x1b[46m%d円\x1b[49mです", sum);

    return 0;
}