#include <stdio.h>
typedef unsigned int uint; //简化复杂类型名，重新命名uint

/*struct Node
{
   int data;
   struct Node* next;
};                    //结构体类型  */
typedef struct Node
{
    int data;
    struct Node *next;
} Node; //结构体类型

int main()
{
    unsigned int num = 0; //使用类型时不方便
    uint num2 = 1;        //创建变量的类型与上面的类型一致
                          // unsigned int与uint两者等价
    // struct Node n;    //创建结构体类型变量不方便
    Node n2; //简化后
    return 0;
}