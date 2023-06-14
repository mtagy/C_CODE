#include <stdio.h>
int main()
{
    int day = 0;
    scanf("%d", &day);
    switch (day)
    {
    case 1:
        printf("星期一\n");
        break;
    case 2:
        printf("星期二\n");
        break;
    case 3:                 //语句项中不加break(Switch语句出口，跳出语句）
        printf("星期三\n"); //输入3会打印输出星期三。。。星期日
        break;              //只给了Switch语句入口，未告知出口，会一直往后走完最后一个语句项停止
    case 4:
        printf("星期四\n");
        break;
    case 5:
        printf("星期五\n");
        break;
    case 6:
        printf("星期六\n");
        break;
    case 7:
        printf("星期日\n");
        break;
    default:
        printf("选择错误\n");
        break;
    }
    return 0;
}