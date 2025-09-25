#include<stdio.h>
void add()
{
int a=5,b=6;
printf("inside fuction : %p %p\n", &a,&b);

}
int main()
{
    int a=6,b=5;
    printf("%p %p\n",&a,&b);
    add();
    printf("%d %d", a,b);
    


    return 0;
}