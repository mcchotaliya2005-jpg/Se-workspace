#include<stdio.h>
#include<conio.h>

int main()
{

   char c;
   
   printf("enter character: ");
   scanf("%c",&c);
   

   if(c == 'a'||c == 'e'||c == 'i'||c == 'o'||c == 'u') 
   {
       printf("it's a vowel");
   }
  else
  {
      printf("it's a consonant");
  }
  
  
    return 0;
}