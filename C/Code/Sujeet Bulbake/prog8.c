#include <stdio.h>
// Calculator By Switch Statement 
int main()
{
    int a , b , operation;
    char operator;
    printf("Enter The Operator\n");
    scanf("%c", &operator);
    printf("Enter The Value a\n");
    scanf("%d", &a);
    printf("Enter The Value b\n");
    scanf("%d", &b);
    switch (operator)
    {
    case '+':
        operation = a + b;
        printf("%d", operation);
        break;

    case '-':
        operation = a - b;
        printf("%d", operation);
        break;

    case '*':
        operation = a * b;
        printf("%d", operation);
        break;

    case '/':
        operation = a / b;
        printf("%d", operation);
        break;
    
    default:
        printf("Enter The Correct Operator\n");
        break;
    }
}