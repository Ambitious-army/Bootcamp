#include <stdio.h>

// Sejal Dharphale

int main () 
{
    printf("Enter the Alphabet :\n");
    char ch ;
    scanf("%c", &ch );

    switch(ch)
     {
        case 'A':
            printf("APPLE\n");
            break;

        case 'B' :
            printf("BALL\n");
            break;

        case 'C' :
            printf("CALL\n");
            break;

        case 'D' :
            printf("DOG\n");
            break;

        default:
            printf("Wrong! \n");
            break;
    }

}