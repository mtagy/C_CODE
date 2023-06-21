#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void meau()
{
    printf("*************************\n");
    printf("*********1.play**********\n");
    printf("*********0.exit**********\n");
    printf("*************************\n");
}

void game() //电脑产生一个随机数（1~100） 猜数字  反馈：猜大了/猜小了
{
    int guess = 0;
    // srand(100);
    //又出问题了，srand中数值不变，对应随机数也不变  srand中数值变化导致随机数变化 srand中需要一个变化的值 那放一个随机数可以吗？ 不可以，不现实
    //时时变化的值：时间  时间获取:时间戳(当前时间相对于计算机起始时间之间的差值 单位：s 只要时间在变化，时间戳就会变化)，时间戳是一个变化的整数 满足srand()的需求
    // 时间戳获取：time()  time_t time(time_t *timer) 返回一个时间戳（获取系统时间） 参数是一个指针 可以传一个NULL(空指针 跟整型初始化为0类似 相当于0 (void*) 0) 会返回time_t的值(即时间戳)
    // time_t 是C语言中给的类型 本质上是一个整型类型      srand中参数需要一个无符号整型   所以可以将time()的返回值作为srand的参数  但是需要进行强制类型转换(time_t--->unsigned int)
    // srand((unsigned int)time(NULL));    // srand(),rand()需要加头文件stdlib.h  time()需要的头文件time.h
    //使用time()返回的时间戳作为这个随机数的生成起点的设置
    //这里又有一个问题，当输入比较快时，会出现前后两个随机数相同的现象 解决：在调用rand（）生成随机数前用srand()设置随机数起点不需要每次调用game()都重新设置，只需要在整个工程下设置一次即可 因此只需要放入主函数即可
    // 1.生成随机数
    int ret = rand() % 100 + 1;
    //生成随机数的函数 int rand (void);不需要参数，返回类型为整型（返回一个0~RAND_MAX的随机整数) RAND_MAX 0x7fff即32767
    // printf("%d\n", ret);
    //发现每次关闭程序再次运行时生成随机数与上次都一样   解决：使用srand()设置随机数的起点（调用rand函数前使用srand设置随机数的生成器）
    //  srand设置随机数的起点 : void srand(unsigned int seed); 内部需要一个无符号整型数
    //现在又出现一个新问题：需要生成1~100的随机数   解决：rand()%100+1:余数是0~99  +  1----->1~100

    // 2.猜数字
    while (1)
    {
        printf("请猜数字：>");
        scanf("%d", &guess);
        if (guess < ret)
        {
            printf("猜小了\n");
        }
        else if (guess > ret)
        {
            printf("猜大了\n");
        }
        else
        {
            printf("恭喜你，猜对了\n");
            break; //直到猜对跳出循环
        }
    }
}

int main()
{
    srand((unsigned int)time(NULL)); //设置随机数起点
    int input = 0;
    do
    {
        meau();
        printf("请选择：>");
        scanf("%d", &input);
        switch (input)
        {
        case 1:
            // printf("猜数字\n");
            game();
            break;
        case 0:
            printf("退出游戏\n");
            break;
        default:
            printf("选择错误，请重新选择\n");
            break;
        }
    } while (input);

    return 0;
}