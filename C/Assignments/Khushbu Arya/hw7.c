#include <stdio.h>
// Calculate Until Addition Becames More Than 100
// Khushbu Arya 
int main()
{
    int number , a = 1 , sum = 0;
    do
    {
        printf("Enter The Number : ");
        scanf("%d", &number);
        sum = sum + number;
    } while (sum<100);
    printf("Sum : %d", sum);
}