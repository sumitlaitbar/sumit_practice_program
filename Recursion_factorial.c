#include<stdio.h>
int fact(n);
int main()
{
int no;
printf("Enter a number:");
scanf("%d",&no);

printf("\n Factorial of %d = %d  ",no,fact((no)));

}
int fact(n)
{
    if(n==1)
    {
        return 1;
    }
    else{
        return n*fact(n-1);
    }
}


