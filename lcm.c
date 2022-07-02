#include <stdio.h>

int main()
{
    int a,b,hcf=1,min;
    scanf("%d %d",&a,&b);
    min=a<b?a:b;
    for(int i=1;i<=min;i++)
    {
        if(a%i==0&&b%i==0)
        hcf=i;
    }
    int lcm=(a*b)/hcf;
    printf("the lcm is %d",lcm);

    return 0;
}
//lcm=a*b/hcf
