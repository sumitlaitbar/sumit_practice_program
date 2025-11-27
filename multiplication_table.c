#include<stdio.h>
int main()
{
    int num;

    printf("Enter a number Whose multiplication table is printed :  ");
    scanf("%d",&num);
    printf("Multiplication table of %d is\n",num);
    for (int i =1; i <=10; i++)
    {
        printf("%d x %d = %d\n",num, i, num*i);

    }
    
}