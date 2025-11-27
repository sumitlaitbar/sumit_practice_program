#include<stdio.h>


int returnmax(int array[],int n)
{
    int max=0;
    for (int i = 0; i < n; i++)
    {
        if(array[i]>max)
        {
         max=array[i];
        }
    }
    
    return max;
}


int main(){

    int arr[]={1,2,4,599,6,7};
    int max=returnmax(arr,7);
    printf("%d",max);

}