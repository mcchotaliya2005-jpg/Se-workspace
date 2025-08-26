#include<stdio.h>
#include<conio.h>
void main()
{
    int a = 6;
    int b = 3;
    
    //Arithmetic Op -> +,-,*,/,%
    
    int add = a + b;
    int sub = a - b;
    int mul = a * b;
    int d1  =  a / b;
    int mod = a % b;
    
    printf("\n Your Addition is %d",add);
    printf("\n Your Substraction is %d",sub);
    printf("\n Your Multiplication is %d",mul);
    printf("\n Your Division is %d",d1);
    printf("\n Your Modulus is %d",mod);
    
    getch();
}