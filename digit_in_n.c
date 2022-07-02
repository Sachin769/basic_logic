#include <stdio.h>

int main() {
     int n,c=0;
     scanf("%d",&n);
     while(n!=0)
     {
         n=n/10;
         c++;
     }
     printf("total digit in the number %d",c);
    
    return 0;
}

