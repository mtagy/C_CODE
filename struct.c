#include <stdio.h>
struct Stu //结构体类型
{
    char name[20]; //结构体成员变量
    int age;
    char sex[10];
    char tele[12]; //此时不占空间
    //只有使用结构体类型去创建变量时才会向内存申请空间
};

void print(struct Stu *ps)
{
    printf("%s %d %s %s\n", (*ps).name, (*ps).age, (*ps).sex, (*ps).tele);
    printf("%s %d %s %s\n", ps->name, ps->age, ps->sex, ps->tele); //简介写法
}
int main()
{
    struct Stu s = {"zhangshan", 20, "nan", "15000952387"};
    //创建结构体类型变量并初始化
    printf("%s %d %s %s\n", s.name, s.age, s.sex, s.tele);
    //结构体变量用.操作符访问结构体成员
    //结构体对象.成员名
    print(&s);
    return 0;
}