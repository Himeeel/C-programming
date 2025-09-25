#include<stdio.h>
int main()
{
int n;
scanf("%d", &n);
int a[n];
for (int i = 0; i < n; i++)
{
  scanf("%d", &a[i]);
}
int f[100000];
for (int i = 0; i <n; i++)
{
   f[a[i]]=1;
}
for (int i = 0; i < 10; i++)
{
    printf("%d %d\n", i, f[i]);
}
//printf("%d",f[9]); index chk



    return 0;
}