#include <stdio.h>
int main()
{
    int a = 10;
    printf("%d\n", sizeof(a));   //输出都是4
    printf("%d\n", sizeof(int)); // sizeof可以直接跟变量
                                 //或者这个变量对应的类型
    printf("%d\n", sizeof a);   //输出为4，sizeof不是函数
                                //可以不加括号，函数（）不能省
    printf("%d\n", sizeof int); // err 虽然sizeof是操作符
                                //但是语法不支持int不加（）
                                //对于类型来说，还是得加上（）
    return 0;
}