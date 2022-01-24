#include <stdio.h>

int main () {
    int a ;
    printf("Enter the number for which you want the table:  \n" );
    scanf("%d",&a);
    printf("The Multiplication Table of %d is \n" , a);

    int i = 1;
    do {
        printf("%d X %d = %d\n" , a , i , a*i);
        i++;
    } while ( i <= 10 );
}
