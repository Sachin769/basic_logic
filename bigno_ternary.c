#include <stdio.h>

int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int max=a>b&&a>c?a:b>c?b:c;
    printf("the largest no. %d",max);

    return 0;
}
//find largest no. using ternary operator
