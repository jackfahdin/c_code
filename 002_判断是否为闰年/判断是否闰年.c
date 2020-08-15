/*********************************************************************************
        >文件：002判断是否闰年.c
        >作者：郭茂杰
        >邮箱：guomaojie@outlook.com
        >时间：2020年08月15日 14时30分25秒
*********************************************************************************/
#include<stdio.h>

int isleep(int year) {
    if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0))
        return 1;
    return 0;
}
int main(void) {
    int leap_year, year;
    printf("输入当前年份：");
    scanf("%d", &year);
    leap_year = isleep(year);
    printf("leap_year=%d\n", leap_year);
    return 0;
}
