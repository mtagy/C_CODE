#include <stdio.h>
// #define pai 3.1415926
int main()
{
    // float r=0.0f;
    // scanf("%f",&r);
    // printf("%.3f",4/3.0*pai*r*r*r);//V不定义这种方法也可以达到精度要求
    //(注意浮点数计算需要在表达式中加入浮点数即3——>3.0)
    //同时定义r v为单精度(%f 初始化需要写成0.0f)时，精度不够——>double(%lf  初始化0.0)
    double r = 0.0;
    scanf("%lf", &r);
    double v = 0.0;
    v = 4 / 3.0 * 3.1415926 * r * r * r;
    printf("%.3lf", v);
    return 0;
}