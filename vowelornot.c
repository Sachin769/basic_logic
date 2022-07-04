
#include <stdio.h>

int main()
{
    char n;
    scanf("%c",&n);
    if((n>='A' && n<='Z') || (n>='a' && n<='z'))
    {
    switch(n)
        {
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                printf("%c is a VOWEL.\n",n);
                break;
            default:
                printf("%c is a CONSONANT.\n",n);            
        }
    }
        else
    {
        printf("%c is not an alphabet.\n",n);
    }
    
return 0;
}
//vowel or not 
