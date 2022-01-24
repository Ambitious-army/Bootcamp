#include <stdio.h>

int main() {
    int p , r , t , interest;

    printf("Enter the principle amount: \n");
    scanf("%d" , &p);

    printf("Enter the rate of interest: \n");;
    scanf("%d" , &r);

    printf("Enter the time period in years: \n");
    scanf("%d" , &t);

    interest = ( p * r * t ) / 100;

    printf("Your Simple interest is %d \n" , interest);
}

