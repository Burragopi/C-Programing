
#include <stdio.h>

int main()
{
 char c;
 printf("enter a character:");
 scanf("%c",&c);
 if(c=='a'||c=='A'||c=='e'||c=='E'||c=='i'||c=='I'||c=='o'||c=='O'||c=='u'||c=='U'||c=='s'||c=='S')
 {
     printf("%c is a vowel",c);
 }
 else
 {
     printf("%c is not a vowel",c);
 }
}