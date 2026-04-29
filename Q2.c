// 2.キーボードから3つの実数を入力し，その平均を整数で表示するプログラム
#include<stdio.h>
int main(void){
    double x,y,z;
    int avr;
    
    printf("3つの実数を入力してください\n実数x:");
    scanf("%lf", &x);
    printf("実数y:");
    scanf("%lf", &y);
    printf("実数z:");
    scanf("%lf", &z);
    avr = (int)((x+y+z) / 3.0 + 0.5);
    printf("これらの値の平均は(四捨五入して)%dです", avr);

    getchar();getchar();
    return 0;
}