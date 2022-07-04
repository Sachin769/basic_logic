#include <stdio.h>

int main()
{
    int n,sum=0,c=0,b,x,s;
    scanf("%d",&n);
    x=n;
    s=n;
    while(x>0)
    {
        x=x/10;
        c++;
    }
    while(n>0)
    {
        x=n%10;
        b=c-1;
        while(b>0)
        {
            
            x=x*10;
            b--;
        }
        sum=sum+x;
        c--;
        n=n/10;
    }
    if(s==sum)
    {
        printf("palindrome");
    }
    else
    {
        printf("not palindrome");
    }
return 0;
}

