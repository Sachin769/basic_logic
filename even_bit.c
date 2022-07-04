#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    if((n&1)==0)
    printf("yes");
    else
    printf("no");
    return 0;
}
//given n is even or not using bitwise operator
