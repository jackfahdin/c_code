/*********************************************************************************
        >文件：main.c
        >作者：郭茂杰
        >邮箱：guoamojie@outlook.com
        >时间：2020年07月18日 15时46分28秒
*********************************************************************************/
#include<stdio.h>
#include<stdlib.h>

int main(int argc,char *argv[]){
    unsigned long year;
    printf("Input a year:");
    scanf("%lu", &year);
    if ((year%4==0&&year%100!=0)||(year%400==0)){
        printf("Year %lu is a leap year.\n", year);
    }else{
        printf("Year %lu is not a leap year.\n", year);
    }
    system("pause");
    return 0;
}