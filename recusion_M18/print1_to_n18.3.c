#include<stdio.h>
 void fun(int x, int n)
 {
    if (x>n)
    {
       return;
    }
printf("before call fun,current x=%d\n",x);
printf("%d\n", x);
fun(x+1,n);
printf("after call fun, current x=%d\n",x);
 }

 int main()
 {
printf("before call fun in main\n");
    fun(1,6);
    printf("after call fun in main\n");

    return 0;
 }