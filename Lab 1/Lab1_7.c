#include<stdio.h>
#include<string.h>
void main()
{
    char a[100];
    gets(a);
    int i,l;
    l=strlen(a);
    for(i=0;i<l;i++)
    {
        if(a[i]=='a')
        {
            a[i]='x';
        }
    }
    puts(a);
}
