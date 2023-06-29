#include <stdio.h>
#include <string.h>

void reverse(char arr[])
{
    int left = 0;
    int right = strlen(arr) - 1;
    // sz-2
    while (left < right) //第n个和倒数n个交换  >=没有可交换的了
    {                    //循环   迭代
        int tmp = arr[left];
        arr[left] = arr[right];
        arr[right] = tmp;
        left++;
        right--;
    }
}

int main()
{ //字符串反向排序（字符串数组存储内容反向） 函数实现
    char arr[] = "abcdef";
    reverse(arr);
    printf("%s\n", arr);
    return 0;
}