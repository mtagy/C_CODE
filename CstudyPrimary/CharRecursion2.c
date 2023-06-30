#include <stdio.h>
#include <string.h>
// reverse（）只有一个参数 递归实现
int my_strlen(char *str)
{
    int count = 0;
    while (*str != '\0')
    {
        count++;
        str++;
    }
    return count;
}

// 字符串逆序
//字符串反向排序（字符串数组存储内容反向） 递归实现
void reverse(char *str)
{ //逆序 abcdef ->交换af+逆序bcde ->交换af 交换be+逆序cd -> 交换af 交换be 交换cd
    // 1.tmp=a a=f (暂时不把a放到f处)2.f=\0(让从b开始向后组成一个字符串)3.逆序bcde 4.f=tmp
    char tmp = *str;
    int len = my_strlen(str);
    *str = *(str + len - 1); //这里不能sizeof求字符串字符串大小，这里数组没有传过来，传的是地址
    *(str + len - 1) = '\0';
    if (my_strlen(str + 1) >= 2) //中间剩一个字符就不用逆序了
        reverse(str + 1);        //要加限制条件否则会死递归
    *(str + len - 1) = tmp;
}

int main()
{
    char arr[] = "abcdef";
    reverse(arr);
    printf("%s\n", arr);
    return 0;
}