#include<stdio.h>
// Sujeet Bulbake 
// Question - 2
// Date - 25 - 01 - 2022
int main()
{
    int a , b , factorial = 1;
    printf("Enter The Number : ");
    scanf("%d", &a);
    for ( b = 1; b <= a; b++)
    {
        factorial = factorial * b;
    }
    printf("%d! = %d", a , factorial);  
}