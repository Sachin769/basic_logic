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
    printf("the hcf is %d",hcf);

    return 0;
}
//hcf of a given no.
