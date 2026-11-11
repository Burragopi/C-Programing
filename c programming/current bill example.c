
#include <stdio.h>

int main()
{
 int units;
 int p;
 printf("enter a number:");
 scanf("%d",&units);
 if((units<=100)&&(units=0))
 {
     p=2;
     printf("%d is current bill of this month",units*p);
 }
 else if((units<=200)&&(units>100))
 {
     p=3;
     printf("%dis an current bill of this month",units*p);
 }
 else if((units<=300)&&(units>200))
 {
     p=4;
     printf("%dis an current bill of this month",units*p);
 }
 else
 {
     p=5;
     printf("%dis an current bill of this month",units*p);
 }
}