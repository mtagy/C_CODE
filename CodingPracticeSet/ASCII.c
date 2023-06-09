#include <stdio.h>

int main()
{

    // printf("%C\n", '\098');
    //非法8进制
    //'\098'代表一个八进制常量，它会被转换为对应的 ASCII 字符。
    //由于八进制数的合法范围是0~7，而'9'不属于这个范围，因此'\098'实际上是由两个字符组成的，即'\09'和'8'。
    //而'\09'对应的是水平制表符（ASCII码为9），所以'\098'在输出时会被解释为一个水平制表符后跟一个字符'8'
    //所以输出的结果为一个制表符和一个'8'字符。
    // printf("%c\n", '\x98');//超出范围的十六进制无法被正确转换为对应ASCII

    printf("%c\n", '\077');
    printf("%c\n", '\77');  // ASCII的八进制
    printf("%c\n", 63);     // ASCII的十进制
    printf("%c\n", '\x3f'); // ASCII的十六进制
    printf("%c\n", '?');    //用字符常量'?'
    //打印输出？字符
    //也可以直接用字符常量'?'
    //也可以用ASCII码值,
    //有三种形式：十进制（就是我们常说的ASCII）， 八进制或十六进制
    //（8进制和16进制的ASCII值需要用转义字符来表示）
    printf("%c\n", 98); //同样都是98，在%c格式下，98被看作字符b的十进制的ASCII值
    printf("%d\n", 98); //在%d的格式下，98就是普通数字
    return 0;
}
