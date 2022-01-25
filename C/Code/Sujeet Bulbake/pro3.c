#include <stdio.h>
// Calculate Average Of 3 Numbers
int main()
{
    int x , y , z , total;
    float average;
    printf("Enter Number x , y , z\n");
    scanf("%d", &x);  // ampersand
    scanf("%d", &y);
    scanf("%d", &z);
    total = x + y + z;
    average = total / 3;
    printf("%.2f", average);
}