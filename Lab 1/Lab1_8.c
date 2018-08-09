#include<stdio.h>
void main()
{
    int a[10];
    int n,temp,max;
    int i,j;
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("press 1 for ascending  \n");
    printf("press 2 for descending  \n");
    scanf("%d",&n);
    switch(n)
    {
        case 1: for(i=0;i<10;i++)
                {
                    for(j=0;j<10;j++)
                    if(a[i]<a[j])
                    {
                       temp=a[i];
                       a[i]=a[j];
                       a[j]=temp;
                    }
                }
                for(i=0;i<10;i++)
                {
                    printf("%d ",a[i]);
                }
                break;

        case 2: for(i=0;i<10;i++)
                {
                    for(j=0;j<10;j++)
                    {
                    if(a[i]>a[j])
                    {
                       temp=a[i];
                       a[i]=a[j];
                       a[j]=temp;
                    }
                }
                for(i=0;i<10;i++)
                {
                    printf("%d ",a[i]);
                }
                break;
                }


    }
}
