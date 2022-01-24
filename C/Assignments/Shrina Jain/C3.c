#include<stdio.h>

int main()
{
    int a, i;
    printf("Enter number a\n");
    scanf("%d", &a);
    do
    {
        printf("%d x %d=%d\n",a,i,a*i);
        i=i+1;
    } while (i<11);
    
}
    
  
