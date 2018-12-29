#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[])
{
    //随机数

    //添加随机数种子
    time_t timer = time(NULL);
    srand((size_t)timer);

   //等价于 srand((size_t)timer(NULL));
    for(int i = 0;i < 10;i++)
    {
        printf("%d\n",rand()%10);
    }
    return 0;
}
