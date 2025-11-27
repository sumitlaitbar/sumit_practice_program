#include<stdio.h>
 int main()
 {
    int num;
    int rev=0;

    printf("Enter a number :");
    scanf("%d",&num);
// 1234
    while (num>0)
    {
        rev=rev*10+num%10;
        num=num/10;

    }

    printf("Revers number is :%d",rev);
    

 
 }