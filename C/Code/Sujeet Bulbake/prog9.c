#include <stdio.h>
// Multiplication Table Of Number n
int main()
{
    int a;
    printf("Enter The Number You Want The Multiplication Table\n");
    scanf("%d", &a);
    printf("The Multiplication Table of %d is \n", a);
    for (int i = 1; i <= 10; i++)
    {
        printf("%d X %d = %d\n" , a , i , a*i);
    }
}