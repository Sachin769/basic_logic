#include <stdio.h>

int main()
{
    int i,j,k,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            printf(" ");
        }
        for(k=j;k<n;k++)
          printf("*");
        printf("\n");
    }

    return 0;
}
//e.g 5 
//    *
//   **
//  ***
// ****
//*****
