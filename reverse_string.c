#include<stdio.h>
int main()
{
    char temp;
    int len=0;

    char s[]="sumit";
    while (s[len]!='\0')
    {
         len++;
    }
printf("the length of string is %d \n",len) ;   
for (int i = 0; i <(len-1)/2; i++)
{
    temp =s[i];
    s[i]=s[len-1-i];
    s[len-1-i]=temp;
}
printf("reverse string is %s:",s);

}