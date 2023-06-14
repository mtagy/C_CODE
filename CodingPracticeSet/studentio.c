#include <stdio.h>
int main()
{
    int id = 0;
    float c = 0.0f; //写0.0会被认为是double型的加上f才是float类型
    float math = 0.0f;
    float eng = 0.0f;
    scanf("%d;%f,%f,%f", &id, &c, &math, &eng);

    printf("The each subject score of No. %d is %.2f, %.2f, %.2f.\n", id, c,
           math, eng);
    return 0;
}
