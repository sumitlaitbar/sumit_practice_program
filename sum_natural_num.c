#include<stdio.h>
#define PI 3.14
int main()
{
    // int n,sum=0;
    // printf("Enter a last number:");
    // scanf("%d",&n);

    // // for(int i=0;i<=n;i++)
    // // {2
    // //     sum=sum+i;
    // // }
    // sum=(n*n+n)/2;
    // printf("Sum n natural number is %d:",sum);
  


    // float length,width;
    // float area;

    // printf("Enter a length:");
    // scanf("%f",&length);

    // printf("Enter a width:");
    // scanf("%f",&width);

    // area=length*width;

    // printf("Area of recatngal =%f", area);


    float radius;
    float area;

    printf("Enter a raius");
    scanf("%f",&radius);

    area=PI*radius*radius;

    printf("Area of circle:%f",area);

}
