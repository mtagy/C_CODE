#include <stdio.h>
#include <string.h> //strcmp()
int main()
{ //关机程序
    //通过在命令行窗口输入命令关机 shutdown -s -t 60 (-s关机 -t设置时间倒计时关机 60表示60秒内关机)
    // shutdown -a 取消关机  在C语言中用库函数system()来执行系统命令
    char input[20] = {0};
    system("shutdown -s -t 60");
again:
    printf("请注意你的电脑在60秒内关机,如果输入：不要关机，就取消关机\n");
    scanf("%s", input);
    if (strcmp(input, "不要关机") == 0) //比较两个字符串不用==，而是strcmp
    {
        system("shutdown -a");
    }
    else
    {
        goto again;
    }
    return 0;
}