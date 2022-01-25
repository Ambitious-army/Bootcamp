#include <stdio.h>
// Area And Perimeter Of Circle 
int main()
{
    int r;
    float area , perimeter;
    printf("Enter The Radius Of The Circle\n");
    scanf("%d", &r);
    area = 3.14 * r * r;
    perimeter = 2 * 3.14 * r;
    printf("Area = %f \n Perimeter = %f", area , perimeter);
}