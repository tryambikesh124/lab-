#include<stdio.h>
int main()
{
    int a[10];
    int i;
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    int max=a[0];
    for(i=1;i<10;i++)
    {
        if(a[i]>max)
        max=a[i];
    }
    printf("%d is the largest number ",max);
return 0;
}
