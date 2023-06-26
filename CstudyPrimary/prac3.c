#include <stdio.h>
void swap(int *px, int *py)
{
    int c = 0;
    c = *px;
    *px = *py;
    *py = c;
}
int main()
{ //三个整数从大到小输出
    int a = 0, b = 0, c = 0;
    //输入
    scanf("%d %d %d", &a, &b, &c);
    //调整   其他方法：1.排序 2.swap()
    int tmp = 0;
    if (a < b)
    {
        /* tmp = a;
         a = b;
         b = tmp;*/
        swap(&a, &b);
    }
    if (a < c)
    {
        /*tmp = a;
        a = c;
        c = tmp;*/
        swap(&a, &c);
    }
    if (b < c)
    {
        /* tmp = b;
         b = c;
         c = tmp;*/
        swap(&b, &c);
    }
    //输出
    printf("%d %d %d\n", a, b, c);
    return 0;
}