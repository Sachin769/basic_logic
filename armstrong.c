#include <stdio.h>
int main() {
    int n,d,sum=0,mult,i,c=0,y;
    scanf("%d",&n);
    d=n;
    y=n;
    while(d!=0)
    {
        d=d/10;
        c++;
    }
    while(n!=0)
    {
        d=n%10;
        mult=1;
        for(i=0;i<c;i++)
        {
            mult=mult*d;
        }
        sum=sum+mult;
        n=n/10;
    }
    if(sum==y)
    printf("armstrong no.");
    else
    printf("not armstrong no.");
    return 0;
}
//0, 1, 153, 370, 371 and 407 are armstrong no. check with this.
