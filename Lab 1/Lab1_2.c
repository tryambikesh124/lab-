#include<stdio.h>
int main()
{
    int n,c=0,i;
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        c++;
    }
    if(c>1)
    printf("%d is not a prime number",n);
    else
    printf("%d is  a prime number",n);
return 0;
}
