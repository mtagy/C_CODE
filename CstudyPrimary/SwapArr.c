#include <stdio.h>
int main()
{ //交换数组 （内容进行交换） 两个数组一样大
    int arr1[] = {1, 3, 5, 7, 9};
    int arr2[] = {2, 4, 6, 8, 0};
    /*  //错误的示范
      int tmp[] = {0};
      //1.tmp中就一个元素空间不够
      //2.数组名是首元素地址  地址是一个常量值 不是空间 无法进行交换
      tmp = arr1;
      arr1 = arr2;
      arr2 = tmp;*/
    int i = 0;
    int sz = sizeof(arr1) / sizeof(arr1[0]);
    for (i = 0; i < sz; i++)
    {
        int tmp = arr1[i];
        arr1[i] = arr2[i];
        arr2[i] = tmp;
    }
    for (i = 0; i < sz; i++)
    {
        printf("%d ", arr1[i]);
    }
    printf("\n");
    for (i = 0; i < sz; i++)
    {
        printf("%d ", arr2[i]);
    }
    return 0;
}