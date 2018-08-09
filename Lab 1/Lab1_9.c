#include<stdio.h>
void main()
{
    int *pa;
    int a,i,n,f=0;
    printf("Enter size\n");
    scanf("%d",&a);
    pa=(int*)malloc(a*sizeof(a));
    printf("Enter %d integers\n",a);
    for(i=0;i<a;i++)
    {
        scanf("%d",pa+i);
    }
    printf("Enter number to be search\n");
    scanf("%d",&n);
    for(i=0;i<a;i++)
    {
        if(*(pa+i)==n)
        {
           f++;
        }
    }
    if (f==1)
        printf("Element found");
    else
        printf("element not found");
}
