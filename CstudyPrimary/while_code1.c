#include <stdio.h>

int main()
{
    int ch = 0;
    while ((ch = getchar()) != EOF) // getchar()获取字符的ASCII值
        putchar(ch);                //打印字符 方法二printf("%c\n",ch);
    return 0;                       // end of file 文件结束标志(值=-1 整数)
}
// getchar读取出错/遇到文件末尾的返回值为EOF，读取正确返回读取字符
// EOF就是-1  如果定义一个字符型变量（1byte)，无法接收存储-1这个返回值
//所以定义一个整型去接收getchar()的返回值
//读到正常字符就打印输出 停止的方法（getchar返回EOF）:Ctrl+z

//输入缓冲区存在于getchar和键盘之间的，当输入字符'a'时，敲入回车才会被放入输入缓存区
//因此输入缓存区有'a''\n'两个字符，getchar依次去读取并进入循环输出
//显示效果是：输出字符后还换行显示光标

//这里的代码是可以用來清理缓冲区的.
