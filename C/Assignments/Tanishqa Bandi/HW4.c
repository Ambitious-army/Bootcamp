#include <stdio.h>

// PRINT THE ALPHABETICAL NAME 

int main()
{
    
    char alphabet;
    printf("Enter the Alphabet \n");
    scanf("%c",&alphabet) ;
    
    switch(alphabet)
    {
       case 'A': 

        printf("Apple\n");
        break;

       case 'B': 
    
        printf("Ball\n");
        break;

       case 'C': 
         
        printf("Call\n");
        break;

        case 'D': 
        
        printf("Dog\n");
        break;

        default:

        printf("WRONG\n");
        break;
        
    }


    

}