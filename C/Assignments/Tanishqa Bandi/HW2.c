#include<stdio.h>

// MULTIPLICATION OF A NUMBER BY DO WHILE LOOP 

int main()

{
    
    int num,i;
    printf("Enter a integer value ");
    scanf("%d",&num);
    
    i=1;
    do
    {
        printf("%d * %d = %d\n",num,i,num*i);
        i++;
    }
     while(i<=10);
     printf("This is the required Multiplication table");
    
    return 0;
}
