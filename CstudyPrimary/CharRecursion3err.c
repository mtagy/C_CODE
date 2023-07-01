#include <stdio.h>
//多参数 right left arr 递归实现
//逆序abcdef :先用left和right锁定的a和f进行交换 逆序bcde (left+1 right-1 再让新left和新right锁定的字符be进行交换 逆序cd)
//直到left >=right 中间没有可以交换元素
//不需要\0找结束位置，直接用left right 限制范围

void reverse(char arr[], int left, int right)
{
    char tmp = arr[left];
    arr[left] = arr[right];
    arr[right] = tmp;
    if (left < right)
        reverse(arr, left + 1, right - 1);
}

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

int main()
{
    char arr[] = "abcdef";
    int left = 0;
    int right = my_strlen(arr) - 1;
    reverse(arr, left, right); //将arr中left锁定的元素和right的元素之间的字符串进行逆序
    printf("%s\n", arr);
    return 0;
}