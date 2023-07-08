#include <stdio.h>
#include <ctype.h>

int main()
{
    char ch;
    /* while((ch=getchar())!=EOF)   //方法一
     {
      if(ch>='A'&&ch<='Z')
      {
          printf("%c\n",ch+32);
      }
      if(ch>='a'&&ch<='z')
      {
          printf("%c\n",ch-32);
      }
     }*/
    // scanf() 返回值：读取成功返回读取数据的个数 读取失败返回EOF
    //此处 一个%c  数据个数：1
    //方法二
    /*while(scanf("%c",&ch)==1)
     {
         if(ch>='A'&&ch<='Z')
             printf("%c\n",ch+32);
         else//判断条件不清楚需要清除\n
             printf("%c\n",ch-32);
         getchar();//清除\n
     }*/
    //方法三：用库函数判断大小写    转换多小写   头文件ctype.h
    // islower()判断小写 是小写返回值为真
    // isupper()判断大写 是大写返回值为假
    //转换大小的库函数：
    // toupper() 小写转大写   tolower() 大写转小写
    while (scanf("%c", &ch) != EOF)
    {
        if (islower(ch))
            printf("%c\n", toupper(ch));
        else if (isupper(ch))
            printf("%c\n", tolower(ch));
    }

    return 0;
}