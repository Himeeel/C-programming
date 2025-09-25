#include<stdio.h>
int main()
{
int n,m;
while (scanf("%d %d",&n, &m ) != EOF)
{
    int sum =0;
    if (n<=0 || m<=0)

    {
       break;
    }

    if (m>n && m!=n)
    {
      for (int i = n; i<=m; i++)
      {
       sum +=i;
       printf("%d ", i);
      }
    }
    if (n>m && n!=m) 
    {
      for (int j = m; j <=n ; j++)
      {
       sum+=j;
       printf("%d ",j);
      }
      
    }
    
    
    printf("sum =%d\n",sum);
    
}

    return 0;
}
// wrong test case 8


// accepted code are given below:

#include <stdio.h>
int main() {
    int n, m;
    while (scanf("%d %d", &n, &m) != EOF) {
        if (n <= 0 || m <= 0) {
            break;
        }

        int sum = 0;
        if (n > m) {
            int temp = n;
            n = m;
            m = temp;
        }

        for (int i = n; i <= m; i++) {
            printf("%d ", i);
            sum += i;
        }
        printf("sum =%d\n", sum);
    }

    return 0;
}
