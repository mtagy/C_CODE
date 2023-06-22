#include <stdio.h>
int main()
{
    int a = 1234;
    printf("0%o 0X%X", a, a);
    //％o以八进制数形式输出整数，％X以十六进制数形式输出整数 ％ld长整型输出
    printf("%15d", 0xABCDEF);
    // 0xABCDEF 十六进制数   %d十进制
    return 0;
}
