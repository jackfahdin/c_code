/*********************************************************************************
        >�ļ���main.c
        >���ߣ���ï��
        >���䣺guoamojie@outlook.com
        >ʱ�䣺2020��07��18�� 15ʱ46��28��
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