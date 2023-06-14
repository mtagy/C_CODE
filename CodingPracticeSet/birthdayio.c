#include <stdio.h>
int main()
{
    int year = 0;
    int month = 0;
    int date = 0;
    scanf("%4d%2d%2d", &year, &month, &date); //数字指定位数
                                              // printf("year=%d\nmonth=%02d\ndate=%02d\n", year, month, date);
    printf("year=%d\n", year);
    printf("month=%02d\n", month); //%02d不足两位用0补齐 没有写0不够2位用空格补充
    printf("date=%02d\n", date);
    return 0;
}
