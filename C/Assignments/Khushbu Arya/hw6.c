#include <stdio.h>
// Khushbu Arya 
// Read Marks And Print Grade 
int main()
{
      int marks;
      printf("Enter The Marks\n");
      scanf("%d", &marks);
      if (marks<40)
      {
          printf("Failed\n");
      }
      else if(marks >= 40 && marks < 60)
      {
          printf("Grade = C");
      }
      else if (marks >= 60 && marks < 70)
      {
          printf("Grade = B");
      }
      else if (marks >= 70 && marks < 80)
      {
          printf("Grade = A");
      }
      else if (marks >= 80 && marks < 100)
      {
          printf("Grade = A+");
      }
      
      
      
      
}