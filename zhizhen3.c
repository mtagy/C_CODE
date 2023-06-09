#include <stdio.h>
int main()
{
    char ch = 'w';
    char *pc = &ch;
    printf("%p\n", pc);
    return 0;
}