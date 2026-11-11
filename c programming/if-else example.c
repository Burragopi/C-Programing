
#include <stdio.h>

int main()
{
   int balance=10000;
   int withdraw=11000;
   if(withdraw<=balance){
       printf("withdraw successfully:");
      printf("%d",balance-withdraw);
   }
   else 
   {
    printf("oops!insufficient balance");  
   }
   return 0;
}