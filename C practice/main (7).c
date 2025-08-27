#include <stdio.h>
#include <conio.h>

int main()
{

 //Total Subject = 5   

int maths = 90;
int gujarati = 82;
int english = 91;
int science = 84;
int hindi = 85;

int TSM = maths + gujarati + english + science + hindi;

printf("\n Total Subject Mark are %d",TSM);

//percentage (per) = TS / 500

float per = TSM*100/500;

printf("\n Your percentage is %.2f%%",per);

    return 0;
}