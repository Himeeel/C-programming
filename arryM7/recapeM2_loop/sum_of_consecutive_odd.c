#include<stdio.h>
int main()
{
int t; // test case
scanf("%d", &t);
for (int cs = 0; cs<t ; cs++)
{
    int x,y;
    scanf("%d %d", &x , &y);
    int sum = 0; 
    if (x>y)
    {
       int temp =x;  // this part excahng valu of x & y.   
       x=y;
       y=temp;
    }

    for (int i = x+1 ; i <y; i++) // 3rd case er valu exchang korte hbe.
    {
       if (i%2!=0)  //odd
       {
        sum +=i;
       }
    }

    printf("%d\n", sum);
   
   
   

}









    return 0;
}