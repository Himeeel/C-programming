#include<stdio.h>
int main()
{
    int arr[5]={1,2,3,4,5};
    int *p=arr;
    printf("%d %d\n",&arr[0], p);
    char x='a';
    char *y=&x;
    printf("%d %d\n",y,(y+1));

    return 0;
}