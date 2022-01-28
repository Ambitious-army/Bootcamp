#include <stdio.h>

int main (){
    int marks ;

    printf("Enter your marks :) \n");
    scanf("%d", &marks);


    if (marks <= 40) {
        printf("Failed");
    } else if (marks >= 40 && marks < 60) {
        printf("C");
    } else if (marks >= 60 && marks < 70) {
        printf("B");
    } else if (marks >= 70 && marks < 80) {
        printf("A");
    } else if (marks >= 80 && marks < 100) {
        printf("A+");
    } else {
        printf("Enter your Correct Marks :) ");
    }


}

