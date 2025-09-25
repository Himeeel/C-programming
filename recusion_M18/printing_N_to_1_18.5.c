#include<stdio.h>
void num(int x )

{
    if (x==0)
    {
        return ;
    }

    printf("%d\n",x);
    num(x-1);

}
int main()
{
num(10);

    return 0;
}