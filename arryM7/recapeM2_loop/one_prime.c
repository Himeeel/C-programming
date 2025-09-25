#include<stdio.h>
int main()
{
int x;
scanf("%d", &x);
if (x<2)
{
printf("NO\n");
}
else if (x==2)
{
   printf("YES\n");
}

else if (x %2==0)
{
 printf("NO\n"); // this part for even num
}
else{
int prime =1;
for (int i = 3; i*i <=x; i+=2)  // why i*i?
{
   if (x%i==0)
   {
    prime =0;
    break;
   }

}
if (prime)
{
   printf("YES\n");
}
else{
printf("NO\n");
}
}
   return 0;
}