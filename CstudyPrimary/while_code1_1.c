//举一个例子
//假设密码是一个字符串
#include <stdio.h>
int main()
{
    char password[20] = {0}; // password是数组名，数组名本来就是地址所以scanf这里不用加取地址
    printf("请输入密码：");  // abcdef\n(敲了回车键才能到输入缓存区被scanf获取)
    scanf("%s", password);   // scanf只取abcdef放进password，不会获取\n(留在输入缓存区)

    // getchar(); //不好的改进：读取\n 使输入缓存区变空（临时写法不是完全正确）
    //当输入abcdef defghi\n时，scanf只会读取空格前的字符
    //所以输入缓存区还剩 defghi\n  getchar()只能读取一个字符 此处getchar读取一个空格
    //输入缓存区中还剩有defghi\n，下一个getchar()直接读取字符，不用等待
    //此处的加一个getchar()改进代码完全失效

    int ch = 0;                      //好的改进：清空缓存区
    while ((ch = getchar()) != '\n') //直到读取到最后一个字符\n表达式为假，退出循环
    {
        ;
    }

    printf("请确认密码:Y/N");
    int ret = getchar(); //取走了输入缓存区中的\n
    if ('Y' == ret)      //\n!='Y'执行else语句打印输出 No
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }
    return 0;
}