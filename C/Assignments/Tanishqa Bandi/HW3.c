#include<stdio.h>  
int main()   

// CALCULATING SIMPLE INTEREST
    {   
        float Principle , Rate , Time , SI ;  
        
        printf("Enter the principle value\n");  
        scanf("%f", &Principle); 

        printf("Enter the rate\n"); 
        scanf("%f", &Rate); 

        printf("Enter the time\n"); 
        scanf("%f", &Time); 

        SI= (Principle * Rate * Time) / (100);
        printf("SI = %f\n", SI);

        return (0);  
    }  