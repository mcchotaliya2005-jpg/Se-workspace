#include<stdio.h>

int main()
{
    
   int mobilestock, laptopstock, desktopstock;
   int mobilepurchase, laptoppurchase, desktoppurchase;
  
   
   // total stock available
   
   printf("\n------TOTAL STOCK------\n");
   printf("\n enter total stock of mobile :20");

   printf("\n enter total stock of laptop :10");
   
   printf("\n enter total stock of desktop :5 \n");
   
   // total purchase stock
   
   printf("\n------TOTAL PURCHASE STOCK------\n");
   printf("\n enter purchased mobile : ");
   scanf("%d", &mobilepurchase);
   
   printf("enter purchased laptop : ");
   scanf("%d", &laptoppurchase);
   
   printf("enter purchased desktop : ");
   scanf("\n %d", &desktoppurchase);
   
   // total remaining stock calculate 
   
   int remainingmobile = (20 - mobilepurchase);
   int remaininglaptop = (10 - laptoppurchase);
   int remainingdesktop = (5 - desktoppurchase);
   
   printf("\n-------REMAINING STOCK------\n");
   printf("\n remainingmobile stock is : %d", remainingmobile);
   printf("\n remaininglaptop stock is : %d", remaininglaptop);
   printf("\n remainingdesktop stock is : %d \n", remainingdesktop);
   
   printf("\n+------------+------------+------------+----------------+\n");
   printf("| Item   |Total Stock| Purchase Stock | Remaining Stock | \n");
   printf("+------------+------------+------------+----------------+\n");
   printf("\n %-10s %-15d %-15d %-15d", "Mobile", 20, 10, 10);
   printf("\n %-10s %-15d %-15d %-15d", "Laptop", 10, 5, 5);
   printf("\n %-10s %-15d %-15d %-15d", "Desktop", 5, 3, 2);
   
   return 0;
   
    
}