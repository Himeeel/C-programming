#include<stdio.h>
int main()
{
int x;
scanf("%d", &x);
for (int num = 2; num <= x; num++)
{
  int prime= 1;

for (int i = 2; i*i <= num; i++)
{
  if (num%i==0)
  {
    prime = 0;
    break;
  }
}
if (prime)
{
   printf("%d ", num);
}
}

printf("\n");

return 0;
}