// 4.クラスの人数がa人である時，野球(9人)をbチーム，バレー(6人)をcチーム作れば何人が参加できないかを計算するプログラム
#include<stdio.h>
// prompt: 表示するメッセージ, min_val: 許容する最小値
int get_safe_int(char prompt[], int min_val) {
    float temp;
    int value;

    while (1) {
        printf("%s", prompt);

        // 1. 数値として読み込めるかチェック
        if (scanf("%f", &temp) != 1) {
            printf("  エラー: 数値を入力してください\n");
            while (getchar() != '\n'); // バッファクリア
            continue;
        }

        // 2. 整数かどうか、および最小値以上かどうかチェック
        if (temp < min_val || temp != (int)temp) {
            printf("  エラー: %d以上の整数を入力してください\n", min_val);
        } else {
            // チェック合格
            value = (int)temp;
            while (getchar() != '\n'); // 改行などを除去
            return value; // 呼び出し元に値を返して、この関数を終了
        }
        while (getchar() != '\n'); // 不正入力時の掃除
    }
}
int main(void){
    int a,b,c;
    int baseball,volley,over;

    baseball = 9;
    volley = 6;

    a = get_safe_int("クラスの人数を入力してください: ", 1);
    b = get_safe_int("野球のチーム数を入力してください: ", 0);
    c = get_safe_int("バレーのチーム数を入力してください: ", 0);

    over = a - (baseball*b + volley*c);
    if (over>0){
        printf("%d人余ります", over);
    } else if (over == 0) {
        printf("全員参加できます");
    }else{
        printf("%d人足りません", -over);
    }

    getchar();getchar();
    return 0;
}