#include <stdio.h>
#include <string.h>
int main() //字符串逆序
{          //字符串反向排序（字符串数组存储内容反向）
    char arr[] = "abcdef";
    int left = 0;
    int right = strlen(arr) - 1;
    // sz-2
    while (left < right) //第n个和倒数n个交换  >=没有可交换的了
    {
        int tmp = arr[left];
        arr[left] = arr[right];
        arr[right] = tmp;
        left++;
        right--;
    }
    printf("%s\n", arr);
    return 0;
}
