/*********************************************************************************
        >文件：判断三角形的类型.c
        >作者：郭茂杰
        >邮箱：guomaojie@outlook.com
        >时间：2020年08月17日 11时20分11秒
*********************************************************************************/
#include<stdio.h>
#include<math.h>

int main(void) {
    float side_a,side_b,side_c;
    printf("输入三角形的a边边长:");scanf("%f",&side_a);
    printf("输入三角形的b边边长:");scanf("%f",&side_b);
    printf("输入三角形的c边边长:");scanf("%f",&side_c);
    if(side_a + side_b > side_c && fabs(side_a - side_b) < side_c) {   
        if(side_a == side_b || side_a == side_c || side_b == side_c)
            if(side_a == side_b && side_a == side_c)
                printf("三角形为等边三角形\n");
            else
                printf("三角形为等腰三角形\n");
        else
            printf("三角形为普通三角形\n");
    } else
        printf("三边构不成三角形\n");
    return 0;
}