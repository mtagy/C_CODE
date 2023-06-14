#include <stdio.h>
int main()
{
    int n = 1;
    int m = 2;
    switch (n)
    {
    case 1:
        m++;
    case 2:
        n++;
    case 3:
        switch (n) // switch允许嵌套使用
        {
        case 1:
            n++;
        case 2:
            m++;
            n++;
            break; //此处的break是从里面的Switch跳出到外面的Switch
        }          //外面的Switch在case 3没有break还会继续往后执行case 4
    case 4:
        m++;
        break;
    default:
        break;
    }
    printf("m =%d,n=%d\n", m, n);
    return 0;
}