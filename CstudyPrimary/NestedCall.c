#include <stdio.h>
void new_line()
{
    printf("hehe\n");
}

void three_line()
{
    int i = 0;
    for (i = 0; i < 3; i++)
    {
        new_line();
    }
}

int main()
{
    //嵌套调用
    three_line(); // main() call three_line()
                  // three_line() call new_line
    return 0;
}
