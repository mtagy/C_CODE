#include <stdio.h>
#include <string.h>
int main()
{
    char arr1[20] = {0};
    char arr2[] = "hello world";
    strcpy(arr1, arr2);
    printf("%s\n", arr1); //输出：hello world
    return 0;
}