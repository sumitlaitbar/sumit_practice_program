// #include<stdio.h>
// int main()
// {
//     int num,fact=1;

//     printf("Enter a number:");
//     scanf("%d",&num);

//     for(int i=1;i<=num;i++)
//     {
//      fact=fact*i;
//     //  fact=n*fact(n-1);
//     }

   
//     printf("Factorial of %d :",fact);    

    
// }

#include<stdio.h>
int factorial (num)
{
    
   
    int n;
    int fact;
  
    if (n==0||n==1)
    {
        return 1;
    }
    else{
       fact=n*fact*n-1;
    }
    

}
int main()
{
    int fac;

 fac=factorial(7);
 printf("factorial is:%d",fac);
 
}