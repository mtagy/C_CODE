#include <stdio.h>
int main()
{
    char c;
    while (scanf("%c", &c) != EOF)
    {
        getchar();
        printf("%c\n", c + 32);
    }
    return 0;
}