#include <stdio.h>
int main()
{
    float price = 0.0;
    int m = 0;
    int d = 0;
    int flag = 0;
    scanf("%f %d %d %d", &price, &m, &d, &flag);
    if (m == 11 && d == 11)
    {
        price *= 0.7;
        if (flag == 1)
        {
            price -= 50;
        }
    }
    else if (m == 12 && d == 12)
    {
        price *= 0.8;
        if (flag == 1)
        {
            price -= 50;
        }
    }
    if (price < 0.0)
        price = 0;
    printf("%.2f\n", price);

    return 0;
}