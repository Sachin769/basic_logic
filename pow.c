#include<stdio.h>
int main()
{
    int n,x,pow=1;
    scanf("%d %d",&x,&n);
    for(int i=1;i<=n;i++)
    {
        pow=pow*x;
    }
    printf("%d",pow);
 return 0;   
}
