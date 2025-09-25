#include<stdio.h>
int main()
{
    int a=5,b=6;
    int *x= &a,*y=&b;
    printf("%d %d\n", *x,*y);
    int temp =*x;
    *x=*y;
    *y=temp;
    printf("%d %d", *x,*y);

    return 0;
}