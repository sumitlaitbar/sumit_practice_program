#include<stdio.h>
int main()
{
    // int i;
    // for(i=0;i<=5;i++);
    // printf("%d",i);

    // int i=1;
    // while(i<5);{
    // printf("%d",i);
    // i++;


    // int j;
    // fot( j= 0 ;j < 5 ; j++);
    // printf("%d",j);
    


    // int i;
    // for(i = 0; i < 5; i++);
    // printf("%d", i);
    // return 0;

    // int i, j;
    // for(i=1;i<=3;i++)
    // {
    //     for (j=1;j<=i;j++)
    //     {
    //         printf("*");

    //     }
    //     printf("\n");
    // }

    // int i=0;
    // while (i++ < 5)
    // {
    //     printf("%d",i);
    // }
    
    
    int i,j;
    for (i=1;i<=3;i++)
    {
        for(j=1;j<=3;j++)
        {
            if(i==j)

            continue;
            printf(" %d %d ",i,j);
        }
    } 
}
    
