#include <stdio.h>
int main() {
    int n,x,y,c=0;
    scanf("%d %d",&n,&x);
    while(n!=0)
    {
        y=n%10;
        if(y==x)
        c++;
        n=n/10;
    }
    printf("the total %d no. present in the form of %d",c,x);
    return 0;
}
