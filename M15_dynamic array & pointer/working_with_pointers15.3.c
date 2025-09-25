#include<stdio.h>
int main()
{
    int a=8;
    int *b=&a;
    printf("%d\n",a); // &a or b are showing memory location
  *b=9;              //a or *b are showing only exact value 
int value= *b;      // value change;
printf("%d\n",a);

    return 0;
}