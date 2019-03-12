#include <stdio.h>

int main () {
    extern int i;// 赋初值是在定义时进行，外部变量声明不能赋初值

    printf("%d", i);
    return 0;
}