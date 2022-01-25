#include <stdio.h>
// Sujeet Bulbake 
// Question - 1
int main()
{
    char Alpha;
    printf("Enter The Alphabet\n");
    scanf("%c", &Alpha);
    switch (Alpha)
    {
    case 'A':
        printf("APPLE");
        break;
    
    case 'B':
        printf("BALL");
        break;

    case 'C':
        printf("CALL");
        break;

    case 'D':
        printf("DOG");
        break;

    default:
        printf("Wrong\n");
        break;
    }
}