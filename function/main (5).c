#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
   char name[50];
   char surname[50];
   
   printf("enter your name");
   scanf("%s",&name);
   
   printf("enter your surname");
   scanf("%s",&surname);
   
   printf("%s",strcat(name,surname));
   
    return 0;
    
}