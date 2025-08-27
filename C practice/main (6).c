#include <stdio.h>
#include <conio.h>

int main()
{
    //find simple interest = p*r*n/100
    
    int p = 5000;
    int r = 7.5;
    int n = 5;
    
    float si = p*r*n/100;
    
    printf("\n simple interest %f", si);
    
     float ans = p+si;
     
     printf(" \n final amount : %f", ans);
     
    
    
    
    return 0;
}