#include<stdio.h>
int main()
{
   int n=1234;
   int count=0;
   int last_digit;

   while (n>0)
   {
    last_digit=n%10;
    count++;
    n=n/10;

   }
   printf("number of digit is :%d",count);
}