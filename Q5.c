// 5.三角形の高さと底辺の長さを入力し，三角形の面積を求めるプログラム(高さと底辺は実数)// 3.りんご1個100円，オレンジ1個88円，苺1パック398円で販売されている．各購入数を入力し，合計金額を表示するプログラム(これらの価格は税込み価格)
#include<stdio.h>
double get_positive_double(char message[]) {
    double val;
    while (1) {
        printf("%s", message);
        if (scanf("%lf", &val) == 1 && val > 0) {
            return val;
        }
        printf("  エラー: 正の数値を入力してください\n");
        while (getchar() != '\n');
    }
}
int main(void){
    double base, height, s;

    height = get_positive_double("三角形の面積を求めます\n\x1b[36m高さ\x1b[39m:");
    base = get_positive_double("\x1b[36m底辺\x1b[39m:");

    s = (base*height)/2;
    printf("面積は\x1b[46m%lf\x1b[49mです", s);

    getchar();getchar();
    return 0;
}