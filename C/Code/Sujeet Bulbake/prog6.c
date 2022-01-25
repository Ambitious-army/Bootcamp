#include <stdio.h>
// To Check The Alphabet Is Vowel Or Not 
int main()
{
    char alpha;
    printf("Enter The Alphabet\n");
    scanf("%c", &alpha);
    if(alpha == 'A' || alpha == 'E' || alpha == 'I' || alpha == 'O' || alpha == 'U')
    {
        printf("%c is Vowel", alpha);
    }
    else
    {
        printf("%c is Not a Vowel", alpha);
    }
}