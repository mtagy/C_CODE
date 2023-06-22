#include <stdio.h>
#include <string.h>
int main()
{
    char arr[] = {"hello world"};
    memset(arr, 'x', 5);
    printf("%s\n", arr); //输出：xxxxx world
    memset(arr + 6, 'y', 3);
    printf("%s\n", arr); //输出：xxxxx yyyld
    return 0;
}