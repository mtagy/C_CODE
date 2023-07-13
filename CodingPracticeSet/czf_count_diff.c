#include <stdio.h>

// 两个int  二进制序列中不同的位数的统计
//方法1
/*int count_diff(int m, int n)
{
    int count = 0, i = 0;
    for (i = 0; i < 32; i++)
    {
        if (((m >> 1) & 1) != ((n >> 1) & 1))
        {
            count++;
        }
    }
    return count;
}*/

//方法2
int count_diff(int m, int n)
{
    int num = m ^ n;
    //相同为0 相异为1 只关注相异的
    int count = 0;
    while (num)
    {
        num = num & (num - 1);
        count++;
    }
    return count;
}

int main()
{
    int m = 0, n = 0;
    scanf("%d %d", &m, &n);
    int ret = count_diff(m, n);
    printf("%d", ret);
    return 0;
}