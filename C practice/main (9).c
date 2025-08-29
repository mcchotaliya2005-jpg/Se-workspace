#include <stdio.h>
#include <conio.h>

int main()

{
  int year;
  printf(" enter a year : ");
  scanf("%d", &year);
  
  if ((year % 400 == 0 ), (year % 4 == 0 && year % 100 != 0))
 
  {
  printf("/n , %d is a leap year", year);
  }
  else
  {
    printf("/n , %d is a not leap year", year);   
  }
  
    return 0;
}