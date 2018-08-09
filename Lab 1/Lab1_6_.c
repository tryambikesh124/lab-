#include<stdio.h>
void main()
{
    char *pa,*pb;
    int i,a,b;
    scanf("%d %d",&a,&b);
    pa=(char*)malloc(a);
    pb=(char*)malloc(b);
    scanf("%s",pa);
    scanf("%s",pb);
    for(i=0;*(pa+i)!='\0';i++)
    {
        if(*(pa+(i+1))=='\0')
        printf("%s %s",pa,pb);
        else
        {printf(" %s",pa);

        }
    }
}
