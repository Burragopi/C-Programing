
#include <stdio.h>

int main()
{
 int a;
 printf("enter a number:");
 scanf("%d",&a);
 if((a&1)==0)
 {
     printf("%d is an even number",a);
 }
 else
 {
     printf("%d is an odd number",a);
 }
}