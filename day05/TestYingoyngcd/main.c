#include <stdio.h>
void test(int a,int b)
{
   b = a + b;
}
int main(int argc, char *argv[])
{
    test(1,2);
   // printf("%d\n",sum);
    return 0;
}
