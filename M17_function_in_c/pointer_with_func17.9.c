#include<stdio.h>

void swap(int*x,int*y)
{
    printf("function:%p %p\n",x,y);
    int temp =*x;
    *x=*y;
    *y=temp;


}
int main()
{
    int a=111,b=222;

     swap(&a,&b); 

     printf("%p %p\n",&a,&b);

     printf("%d %d",a,b);


    return 0;

}