#include <stdio.h>
void main()
{
    int x,y;
    int ans=1;
    scanf("%d%d",&x,&y);
    while(y!=0)
    {
        ans=ans*x;
        y=--y;
    }
    printf("answer is %d",ans);
}
