#include <stdio.h>

// CALCULATE FACTORIAL OF A NUMBER N 

int main ()

{

   int i,  factorial = 1;
   printf("Enter the number\n");
   scanf ("%d", &i);

     for (int n = 1; n <=i; n++)
   {
      factorial = factorial * n;
   }

     printf ("The required factorial is: \n %d! = %d",i, factorial);  

}