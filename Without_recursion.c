#include<stdio.h>
int main()
{
    int no;
    int fact=1;
    printf("Enter a number:");
    scanf("%d",&no);
    for(int i=1; i<=no;i++)
    {
       fact=fact*i;
    }

    printf("Factorial of %d =%d ",no ,fact);



}