#include <stdio.h>
#include <ctype.h>
int main()
{
    char ch;
    /*while((ch=getchar())!=EOF)
     {
         if((ch>='A'&&ch<='Z')||(ch>='a'&&ch<='z'))
         {
             printf("%c is an alphabet.\n",ch);
         }
         else
         {
             printf("%c is not an alphabet.\n",ch);
         }
         getchar();//清空输入缓冲区（\n）
     }*/

    //第二种方法、
    //在%c前加空格：跳过下一个字符之前的所有空白字符（eg \n）
    /*  while(scanf(" %c",&ch)!=EOF)
       {
          if((ch>='A'&&ch<='Z')||(ch>='a'&&ch<='z'))
            {
                printf("%c is an alphabet.\n",ch);
            }
            else
            {
                printf("%c is not an alphabet.\n",ch);
            }
       }*/

    //第三种方法：用库函数判断是否为字母   isalpha()判断一个字符是否为字母
    while (scanf(" %c", &ch) != EOF)
    {
        if (isalpha(ch))
        {
            printf("%c is an alphabet.\n", ch);
        }
        else
        {
            printf("%c is not an alphabet.\n", ch);
        }
    }

    return 0;
}