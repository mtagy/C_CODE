#include <stdio.h>
int main()
{
    // #qwers  敲出来的字符
    // char 字符类型  C语言中描述字符用char
    // 'a';     描述字符常量形式用单引号
    // char ch = 'w';   将字符常量存起来（创建一个字符变量存起来）
    // 字符串  双引号引起来的一串字符
    // c语言中没有字符串类型    怎么存起来   数组
    // "abcdef";
    //不知道后面多少字符[]可以不写数字，
    //会根据字符串内容自动确定需要多少空间
    //要在[]中填入数字一定要保证足够后面的字符存入
    char arr1[] = "abcdef";
    char arr2[] = {'a', 'b', 'c', 'd', 'e', 'f'};
    printf("%s\n", arr1);
    printf("%s\n", arr2);
    int len = strlen("abc"); //求字符串长度的一个函数length 头文件string.h
    printf("%d\n", len);
    printf("%d\n", strlen(arr1)); //
    Printf("%d\n", strlen(arr2));
    return 0;
}