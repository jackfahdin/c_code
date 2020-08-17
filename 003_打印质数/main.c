/*********************************************************************************
        >文件：main.c
        >作者：郭茂杰
        >邮箱：guomaojie@outlook.com
        >时间：2020年08月15日 16时54分12秒
*********************************************************************************/
#include<stdio.h>

int Determine_prime_number(int number) {
    int column = 0;
    for(int i = 1; i <= number; i++) {
        int temp=0;
        for(int j = 1; j <= i; j++) {
            if(i % j ==0)
                temp++;
        }
        if(temp <= 2) {
            column++;
            printf("%-5d", i);
            if(column % 9 == 0)
                printf("\n");
        }
    }
    printf("\n1到%d共有%d个质数\n", number, column);
}
int main(void) {
    int number;
    printf("输入判断区间的最大值：");
    scanf("%d",&number);
    printf("1到%d的质数为：\n", number);
    Determine_prime_number(number);
    return 0;
}
