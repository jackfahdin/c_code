/*********************************************************************************
        >文件：main.c
        >作者：郭茂杰
        >邮箱：guomaojie@outlook.com
        >时间：2020年08月12日 17时36分11秒
*********************************************************************************/
#include<stdio.h>
#include"increment.h"
#include"negate.h"

int main(void){
    int a = 10, b = 0, c = -10;
    printf("increment(a)=%d\n", increment(a));
    printf("increment(b)=%d\n", increment(b));
    printf("increment(c)=%d\n", increment(c));
    printf("negate(a)=%d\n", negate(a));
    printf("negate(b)=%d\n", negate(b));
    printf("negate(c)=%d\n", negate(c));
    return 0;
}