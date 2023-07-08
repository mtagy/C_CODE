#include <stdio.h>
/*int main()
{
   int arr[10]={0};
   int i=0;

   for(i=0;i<3;i++)
   {
    scanf("%d ",&arr[i]);
   }

   int max=arr[0];
   for(i=1;i<3;i++)
   {
    if(max<arr[i])
    {
        max=arr[i];
    }
   }
    printf("%d",max);
    return 0;
}*/

int main()
{
    int max = 0;
    int i = 0;
    int score = 0;
    for (i = 0; i < 3; i++)
    {
        scanf("%d", &score);
        if (score > max)
            max = score;
    }
    printf("%d", max);
}