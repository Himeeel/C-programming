#include<stdio.h>
int a[100000],sum;
int getsum(int i,int n)
{ 
    if (i==n)
{
    return 0;
}
return a[i] + getsum (i+1,n); 
}

int main()
{
    int n;
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
       scanf("%d",&a[i]);
    }
    int ret = getsum(0,n);
    
printf("%d\n",ret);


}