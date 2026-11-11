
#include <stdio.h>

int main()
{
   int balance=10000;
   int withdraw=5000;
   if(withdraw<=balance){
       printf("withdraw successfully:");
      printf("%d",balance-withdraw);
   }
   return 0;
}