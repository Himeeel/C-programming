#include<stdio.h>
void add()
{
int a, b;

scanf("%d %d",&a,&b);
printf("function called\n");

int sum =a+b;

printf("%d\n",sum);
}
void grettings()
{
    printf("hello world\n");
}
int main()
{

add();

grettings();

return 0;

}