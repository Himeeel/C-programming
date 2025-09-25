#include<stdio.h>
void fun2()
{
    printf("inside fn2\n");
}

void fun1()
{
printf("before fun call(inside fun1)\n");

fun2();
printf("after fun call(inside fun1)\n");

}

int main()
{
 printf(" before main function\n");
 fun1();

    printf("after main function\n");
    return 0;
}