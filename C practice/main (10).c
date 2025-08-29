#include <stdio.h>
#include <conio.h>

int main()

{
 int day;
  printf("enter day number (1-7) : ");
  scanf("%d", &day);
  
  switch(day)
  {
      case 1 :
      printf("/n monday");
      break;
      case 2 :
       printf("/n tueday");
        break;
       case 3 :
        printf("/n wednesday");
         break;
        case 4 :
         printf("/n thursdy");
          break;
         case 5 :
          printf("/n friday");
           break;
          case 6 :
           printf("/n saturday");
            break;
            case 7 :
            printf("sunday");
             break;
             default :
             printf("/n,invalid input ! please enter 1-7");
             
  }
 
 
 
 
 
 
 
 
 
    return 0;
}