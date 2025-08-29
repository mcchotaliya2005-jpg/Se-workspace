#include <stdio.h>
#include <conio.h>

int main()

{
  int number; 
  printf("enter a number : ");
  scanf("%d", &number);
  
  if (number > 0)
  {
  printf("\n the number is positive");
  }
  else if  (number < 0)
  {
  printf("\n the number is negative");
  }
  else 
  { 
    printf("\n the number is zero");
  }
  
    return 0;
}