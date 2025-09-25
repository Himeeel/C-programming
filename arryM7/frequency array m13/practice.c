#include<stdio.h>
#include<string.h>
int main()
{
    char s[100]= "himel";
    int f[26];
    int len = strlen(s);
    for (int i = 0; i <len; i++)
    {
        char ch = s[i];
        int index= ch-'a';
        f[index]=1;
    }

    int cnt =0;
    for (int i = 0; i < 26; i++)
    {
        cnt+= f[i];

        if (f[i]==1)
        {
           printf("%c %d\n", i +'a',f[i]);
        }
       
    }
    printf("%d",cnt);

    return 0;
}