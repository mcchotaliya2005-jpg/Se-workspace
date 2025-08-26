#include<stdio.h>
#include<conio.h>
void main()
{
    //simple intrest 
    //I=PRN/100
    
    float intrest,roi=6.5;
    int pri = 50000,n=5;
    
    intrest = pri*roi*n/100;
    
    printf("\n Your Intrest Amount is %f",intrest);
    
    int finalamount = intrest+pri;
    
    printf("\n Your Final Amount is %d",finalamount);
    getch();
}