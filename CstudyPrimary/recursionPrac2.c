#include <stdio.h>
#include <string.h>
//编写函数不允许创建临时变量，求字符串的长度
// 1.求字符串的长度
// 2.模拟实现strlen
// 3.递归求解

int my_strlen(char *str) // 2.模拟实现strlen
// int my_strlen(char str[])
{
    int count = 0; //计数 临时变量
    while (*str != '\0')
    {
        count++;
        str++; //找下一个字符
    }
    return count;
}

int my_strlen2(char *str1)
// 3. 递归实现 my_strlen2(“abc”)->1+my_strlen2(“bc")->1+1+my_strlen2("c")->1+1+1+my_strlen2("")->1+1+1+0
//第一个字符不是'\0'长度至少有一个字符
{

    if (*str1 != '\0')
    {
        return 1 + my_strlen2(str1 + 1); //不推荐++str str=str+1 这个值会改变str的值  只写str+1是不会改变str
    }                                    // 不能用str1++ 先使用再++
    else
        return 0;
}

int main()
{
    // int len = strlen("abc");   // 1.用strlen函数
    // int len = my_strlen("abc");//2.自定义函数去模拟实现strlen函数的功能
    //传递参数：传递的是首字符的地址 跟数组类似
    //方便观察  用数组存起来
    char arr[] = {"abc"};
    int len = my_strlen(arr);
    int len2 = my_strlen2(arr);

    printf("%d\n", len);
    printf("%d\n", len2);

    return 0;
}