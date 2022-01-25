#include <stdio.h>
// Number is Positive or Negative 
int main()
{
    int num;
    printf("Enter The Number\n");
    scanf("%d", &num);
    if( num >= 0 )
    {
        printf("%d is Positive\n", num);
    }
    else
    {
        printf("%d is Negative\n", num);
    }
}