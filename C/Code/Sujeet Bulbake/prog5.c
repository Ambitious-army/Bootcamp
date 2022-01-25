#include <stdio.h>
// Take Three Intgers And Print Largest Among Three Intgers 
int main()
{
    int x , y , z;
    printf("Enter Number x,y,z\n");
    scanf("%d", &x);
    scanf("%d", &y);
    scanf("%d", &z);
    if(x > y && x > z)
    {
        printf("%d is Greater Than %d and %d", x, y,z );
    }
    else if(y > x && y > z)
    {
        printf("%d is Greater Than %d and %d", y, x,z );
    }
    else
    {
        printf("%d is Greater Than %d and %d", z, x,y );
    }
}