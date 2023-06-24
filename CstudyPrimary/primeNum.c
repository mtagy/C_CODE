#include <stdio.h>
#include <math.h>
int main()
{ //打印100~200之间的素数
    //素数是只能被1和它本身整除的数
    int i = 0;
    int count = 0;
    // for (i = 100; i <= 200; i++)//偶数不可能是素数 在奇数里面找即可
    for (i = 101; i <= 200; i += 2) //优化二
    {
        //判断i是否为素数（是：打印）
        //用2~i-1之间的数去试除i
        int flag = 1; // flag是1,表示是素数
        int j = 0;
        // for (j = 2; j <= i - 1; j++) //法一
        for (j = 2; j <= sqrt(i); j++) //法二  优化一
        //非素数：m=a*b
        // eg 16=2*8=4*4 非素数中的一个因子<=sqrt(16)=4
        //只需要找2~sqrt(m)范围内的数即可判断是否为素数
        {
            if (i % j == 0)
            {
                flag = 0;
                break;
            }
        }
        if (flag == 1)
        {
            count++;
            printf("%d", i);
        }
    }
    printf("\ncount = %d\n", count);
    return 0;
}