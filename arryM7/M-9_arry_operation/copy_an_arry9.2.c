#include<stdio.h>
int a[100000], b[100000];

int main()
{
    int length1=0,length2=0;
    scanf("%d", &length1);

    printf("before copy\n");
    for (int i = 0; i <length1; i++)
    {
        scanf("%d",&a[i]);
    }
    for (int i = 0; i <length1; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");

    for (int i = 0; i <length1; i++)
    {
        printf("%d ",b[i]);
    }
    //uprer part ta before copy
    
    //for copy
    for (int i = 0; i <length1; i++)
    {
      b[i]=a[i]; // ei loop ta copy kore
    }
    printf("\n");
    //a[2]=100;
    //[copy korar por valu update korle copy value update hobe na]



    printf("after copy\n");
    
    for (int i = 0; i < length1; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    for (int i = 0; i < length1; i++)
    {
        printf("%d ", b[i]);
    }
    

    return 0;
}