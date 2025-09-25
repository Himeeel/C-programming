/*arry declaration
int a[5]; or floata[7];...
*/
#include<stdio.h>
int main()
{
int a[5];

for (int i = 0 ; i < 5 ; i++)

{
 scanf("%d", &a [i]);
}
a[1] += 100;
//printf("%d", a[4]);

for (int i = 0; i <5; i++)
{
   printf("%d ", a[i]);
}

    return 0;
}
/*
#include<stdio.h>
int main()
{
    char a[5];
    for (int  i = 0; i < 5; i++)
    {
      scanf("%c", &a[i]);
    }
  

for (int i = 0; i < 5; i++)
{
  printf("%d ", a[i]);
}



    return 0;
} */