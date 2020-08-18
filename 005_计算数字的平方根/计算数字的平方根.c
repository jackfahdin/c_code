/*********************************************************************************
        >文件：计算数字的平方根.c
        >作者：郭茂杰
        >邮箱：guomaojie@outlook.com
        >时间：2020年08月18日 19时40分36秒
*********************************************************************************/
#include<stdio.h>

int main(void) {
    float number;
    float new_guess = 1;
    float last_guess;
    printf("输入需要计算的整数：");
    scanf("%f", &number);

    if(number < 0) {
        printf("负数不能计算算数平方根\n");
        return 0;
    }

    do {
        last_guess = new_guess;
        new_guess = (last_guess + number / last_guess) / 2;
        // printf("%.15e\n", new_guess);
    } while (new_guess!=last_guess);

    printf("%g的算数平方根是%g\n", number, new_guess);

    return 0;
}
