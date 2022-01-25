#include <stdio.h>
// calculate sum of first 10 ten numbers 
int main()
{
    int sum = 0;
    for (int i = 1; i <= 10; i++)
    {
         sum = i + sum;
    }
    printf("%d", sum);
    
}
