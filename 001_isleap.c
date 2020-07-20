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
    printf("请输入年份:");
    scanf("%lu", &year);
    if ((year%4==0&&year%100!=0)||(year%400==0)){
        printf("%lu 年是闰年。\n", year);
    }else{
        printf("%lu 年不是闰年。\n", year);
    }
    system("pause");
    return 0;
}