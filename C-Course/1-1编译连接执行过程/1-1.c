#include <stdio.h>
 
int main ()
{
    int var = 10;
    int *p;             // 定义指针变量
    p = &var;			// p赋值为var的地址
    printf("var 变量的地址： %p\n", p);
   return 0;
}
