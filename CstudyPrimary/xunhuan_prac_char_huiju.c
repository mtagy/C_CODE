#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    char arr1[] = "welcome to Beijin!";
    char arr2[] = "##################";
    int left = 0;
    int right = strlen(arr2) - 1;
    // strlen求字符串长度（\0前的所有字符）最右侧下标：字符串长度-1
    //第二种做法：int right = sizeof(arr1)/sizeof(arr1[0])-2;
    // sizeof获取变量或类型所占字节数 数组总体占的字节/单个数组所占字节 =数组元素(\0占空间但是不算长度)
    //所以最右侧下标=数组元素-2（减去\0和下标从0开始算要减1）
    while (left <= right) // left<=right 还有元素未替换
    {
        arr2[left] = arr1[left];
        arr2[right] = arr1[right];
        printf("%s\n", arr2);
        Sleep(1000); //延迟1min 使变化肉眼可见
        // Sleep(1000)是Windows系统下的函数，它可以使程序暂停执行一段时间，单位是毫秒。要使用需要包含头文件windows.h。
        system("cls"); // system是一个库函数, 可以执行系统命令
        // system("cls")清空屏幕 要使用这个指令需要包含头文件stdlib.h
        //用了这一行可以在一行显示
        left++; //调整部分 向中间汇聚
        right--;
    }
    printf("%s\n", arr2);
    //最后的结果显示，不写最后哪一行显示后延时1min会被清屏
    return 0;
}
