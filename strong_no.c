#include <stdio.h>
int main() {
    int n,d,sum=0,mult,i,c=0,y;
    scanf("%d",&n);
    d=n;
    y=n;
    while(n!=0)
    {
        d=n%10;
        mult=1;
        for(i=1;i<=d;i++)
        {
            mult=mult*i;
        }
        sum=sum+mult;
        n=n/10;
    }
    if(sum==y)
    printf("strong number");
    else
    printf("not strong number");
    return 0;
}
