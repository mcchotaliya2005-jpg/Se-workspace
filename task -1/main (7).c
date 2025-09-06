#include<stdio.h>
#include<conio.h>
int main()
{
   int i,num,count = 0;
   printf("enter any number:");
   scanf("%d",&num);
   for(i=1;i<+num;i++)
{
    {
       count++;
       
    }
    
}
    if(count > 2)       
    {
        printf("not prime");
        
    }
    else
    {
        printf("is prime");
    }
    return 0;
}