#include<stdio.h>
void add(int a, int b)
{
printf("function called\n");
int sum = a+b;
printf("%d\n", sum);

}
void alpacheck(char c)
{
    if (c>='a' && c<='z')
    {
        printf("lower\n");
    }

    else {
        printf("upper\n");
    }
    

}

int main()
{
    int a,b;

    scanf("%d %d", &a,&b);

    add(a,b);
     
    alpacheck('a');

    alpacheck('F');



    return 0;
}