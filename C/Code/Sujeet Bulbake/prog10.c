#include <stdio.h>
// Board Percentage Calculator
int main()
{
    float physics , chemistry ,  english , computerScience , maths, total;
    float percentage;
    while (1)
    {
    printf("\nWELCOME TO THE BOARD PERCENTAGE CALCULATOR\n");
    printf("Enter Your Marks\n");
    printf("Enter Your Marks In Chemistry\n");
    scanf("%f", &chemistry);
    printf("Enter Your Marks In Maths\n");
    scanf("%f", &maths);
    printf("Enter Your Marks In Computer Science\n");
    scanf("%f", &computerScience);
    printf("Enter Your Marks In English\n");
    scanf("%f", &english);
    printf("Enter Your Marks In Physics\n");
    scanf("%f", &physics);

    total = physics + chemistry + computerScience + english + maths;
    percentage = total/500* 100;
    printf("%.2f", percentage);

    }
}