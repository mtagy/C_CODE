#include <stdio.h>
#define MAX 100
#define STR "abcdef"
int main()
{
    printf("%d\n", MAX);
    int a = MAX;
    printf("%d\n", a);
    printf("%s\n", STR);
    MAX = 20; // err

    return 0;
}