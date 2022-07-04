#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    if((n&(n-1))==0)
    printf("yes");
    else
    printf("no");
    return 0;
}
//given n power of 2 or not
