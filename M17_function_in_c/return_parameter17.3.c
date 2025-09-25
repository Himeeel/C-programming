
int add(int a,int b)

{
    printf ("function called\n");

int sum= a + b;

return sum;
}
int main()
{
    printf("Before\n");

    printf  ("%d\n",add(20,30));

    printf ("%d\n",add(200,300));

    printf ("after\n");


}