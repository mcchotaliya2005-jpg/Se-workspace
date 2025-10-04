#include <stdio.h>

int main()
{
    int mark[10];
    
    for(int i=0;i<10;i++)
    {
        printf("enter mark for student: ");
        scanf("%d",&mark[i]);
    }
    
   for(int i=0;i<10;i++)
    {
        printf("\n mark of %d",mark[i]);
    }
    return 0;
}
