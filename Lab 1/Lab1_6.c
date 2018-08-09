#include<stdio.h>
#include<string.h>
void main()
{
    char a[100];
    char b[100];
    gets(a);
    gets(b);
    strcat(a,b);
    puts(a);
}
