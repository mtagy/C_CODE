#include <stdio.h>
int main()
{

    printf("%zu\n", sizeof(char *)); //输出都是4/8
    printf("%zu\n", sizeof(short *));
    printf("%zu\n", sizeof(int *));
    printf("%zu\n", sizeof(float *));
    printf("%zu\n", sizeof(double *));
    return 0;
}
