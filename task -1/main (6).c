#include<stdio.h>
#include<conio.h>


int main()
{
   int num,fdigit,ldigit,sum;
   printf("enter any number: ");
   scanf("%d",&num);
   
   ldigit=num %10;
   fdigit=num;
   while(fdigit>10)
   
   {
       fdigit= fdigit/10;
   }
    
    sum=fdigit+ldigit;
    
    printf("fdigit= %d \n",fdigit);
    printf("ldigit= %d \n",ldigit);
    printf("sum of f and ldigit = %d\n", sum);
    return 0;
}