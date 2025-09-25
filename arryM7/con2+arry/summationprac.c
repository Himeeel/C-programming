#include<stdio.h>
int main()
{
 int N;
 scanf("%d", &N);
 int a[N];
 for (int i = 0; i <N; i++)
 {
 scanf("%d", &a[i]);
 }
    long long sum =0;
    for (int i = 0; i < N; i++)
    {
   sum +=a[i];
    }
    if (sum < 0 )
    {
       sum = -1 * sum;
    }
    
printf("%lld", sum );

return 0;
}