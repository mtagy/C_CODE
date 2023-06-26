#include <stdio.h>
int main()
{ //最大公约数
    int a = 0;
    int b = 0;
    scanf("%d %d", &a, &b);
    //求最大公约数：
    //暴力求解： 一个一个试除 不够高效
    // eg；6和9的最大的公约数：不会超过6 找<=6的所有数字
    //从大到小试除直到找到第一个能被这两个数同时整除的数字：最大公约数
    int m = (a < b) ? a : b; //找出较小值

    while (1)
    {
        if (a % m == 0 && b % m == 0)
        {
            break;
        }
        m--;
    }
    printf("%d\n", m);
    //辗转相除法  效率高
    // eg 24和18的最大公约数    a(24)%b(18)=c(6)    a(a=b)(18)%b(b=c)(6)=c(0)   最大公约数：6 即a%b等于0时b的值 速度很快
    // 输入18 24还满足？18%24=18  a=b=24 b=c=18 发现又交换回来了
    int c = 0;
    while (c = a % b) //优化：省略赋值,直到c=0 退出循环
    {
        // int c = a % b;
        a = b;
        b = c;
    }
    printf("%d\n", b);
    return 0;
}