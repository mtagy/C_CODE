#include <stdio.h>
#include <string.h>

int main()
{
    //比较2个字符串是否相等,不能使用==,而应该使用一个库函数: strcmp
    //如果返回値是0,表示2个字符串相等
    //使用这个函数应该包含string.h头文件
    int i = 0;
    char password[20] = {0};
    //假设密码是字符串: abcdef
    for (i = 0; i < 3; i++)
    {
        printf("请输入密码:>");
        scanf("%s", password);               //数组本身就是一个地址所以不用加&
        if (strcmp(password, "abcdef") == 0) //有一个容易犯得错：password==“abcdef"
        {
            printf("登录成功\n");
            break; //登录成功跳出循环
        }
        else
        {
            printf("密码错误\n");
        }
    }

    if (i == 3) //登录成功和三次输入错误都会跳出循环所以加个if语句
    //登录成功i<3不会执行语句
    {
        printf("三次密码输入错误,退出程序\n");
    }

    return 0;
}