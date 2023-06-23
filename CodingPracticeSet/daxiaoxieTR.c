#include <stdio.h>

int main()
{
    int ch = 0;
    // EOF -- end of file
    while ((ch = getchar()) != EOF)
    {
        // putchar(ch + 32);
        // printf("\n");
        printf("%c\n", ch + 32);
        getchar(); //读取\n
        //输入缓冲区有'A''\n',用一个getchar吸收'\n'
    }
    return 0;
}