// 1.キーボードから3つの実数を入力し，その平均を実数で表示するプログラム
#include<stdio.h>
int main(void){
    double x,y,z,avr;
    
    printf("2つの実数を入力してください\n実数x:");
    scanf("%lf", &x);
    printf("実数y:");
    scanf("%lf", &y);
    printf("実数z:");
    scanf("%lf", &z);
    avr = (x+y+z) / 3.0;
    printf("これらの値の平均は%lfです", avr);

    getchar();getchar();
    return 0;
}