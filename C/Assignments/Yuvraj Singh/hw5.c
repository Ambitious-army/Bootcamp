#include <stdio.h>

// Yuvraj Singh

int main () {
    int n , factorial = 1 ;
    printf("Enter the number : \n");
    scanf("%d", &n);

    for (int i = 1; i <= n ; i++) {
            factorial = factorial * i;
    }

    printf("Your factorial of %d is \n%d! = %d" , n , n, factorial);
}

