#include <stdio.h>
 
int main()
{
   
    int p, r, t;
    float SimpleInterest;
    printf("Enter p, r, and t\n");
    scanf("%d %d %d", &p, &r, &t);
    SimpleInterest= p*r*t/100;
    printf("SImple Interest=%.2f",SimpleInterest);

}

