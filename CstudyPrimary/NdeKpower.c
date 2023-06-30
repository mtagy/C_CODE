#include <stdio.h>
//递归实现N的K次方
double Pow(int n, int k) //不要用pow避免与库函数冲突
{                        // Pow(n,k)->n*Pow(n,k-1) （k>0)
    // k=0   1   k>0 Pow(n,k)  k<0  1.0/Pow(n,-k) 小数
    if (k > 0)
        return Pow(n, k - 1) * n;
    else if (0 == k)
        return 1;
    else
        return 1.0 / Pow(n, -k);
}

int main()
{

    int n = 0;
    int k = 0;
    scanf("%d %d", &n, &k);
    double ret = Pow(n, k);
    printf("%lf\n", ret);
    return 0;
}