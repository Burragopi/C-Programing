#include <stdio.h>

int main() {
    int ch,a,b;
    printf("enter the numbers a and b values:");
    scanf("%d%d",&a,&b);
    printf("1.add \n2.sub \n3.mul");
    printf("\nenter your choice:");
    scanf("%d",&ch);
    switch(ch)
        {
            case 1:
            printf("addition of two numbers:%d",a+b);
            break;
            case 2:
            printf("subtraction of two numbers:%d",a-b);
            break;
            case 3:
            printf("multiplication  of two numbers:%d",a*b);
            break;
            default:
            printf("invalid choice:");
        }
    return 0;
}