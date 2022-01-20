#include<stdio.h>

int main()
{
    double first , second , temp;
    printf("Enter First number : ");
    scanf("%lf" , &first);
    printf("Enter Second number : ");
    scanf("%lf" , &second);

    temp = first;

    first = second;

    second = temp;

    printf("\nAfter Swapping first number is : %.5lf\n" , first);
    printf("After swapping second number is : %.5lf" , second);
    return 0;
}
