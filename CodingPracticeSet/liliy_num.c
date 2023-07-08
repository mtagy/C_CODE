#include <stdio.h>

/*int main()
{
    int i=0;
    for(i=10000;i<100000;i++)
    {
        if(i==((i/10000)*(i%10000)+(i/1000)*(i%1000)+(i/100)*(i%100)+(i/10)*(i%10)))
        printf("%d ",i);
    }
    return 0;
}*/

//第二种做法
#include <math.h>
int main()
{
    int i = 0;

    for (i = 10000; i < 100000; i++)
    {
        int j = 0;
        int sum = 0;
        for (j = 1; j <= 4; j++) //产生 10 100 1000 10000
        {
            int k = (int)pow(10, j); // pow()数据为double
            sum += (i % k) * (i / k);
        }
        if (sum == i)
            printf("%d ", i);
    }
    return 0;
}