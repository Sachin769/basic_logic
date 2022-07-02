#include<stdio.h>
int main()
{
    int flag=0,i,n;
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        flag=1;
        break;
    }
    if(flag==0)
    printf("prime no.");
    else
    printf("not prime no.");
    return 0;
}
