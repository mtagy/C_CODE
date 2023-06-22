#include <stdio.h>

void Swap(int *px, int *py) //将地址所指向的内容的值进行交换
{
    int z = *px; // z=a a=b b=z
    *px = *py;
    *py = z;
}

int main()
{
    int a = 0;
    int b = 0;
    scanf("%d %d", &a, &b);
    printf("交换前:a=%d b=%d\n", a, b);
    Swap(&a, &b); //用地址将实参与形参建立联系
    printf("交换后:a=%d b=%d\n", a, b);
    return 0;
}