#include<stdio.h>
int main()
{

    int num,a=0,b=1,c=0;
    printf("Enter a Number:\n");
    scanf( "%d",&num);

    for(int i=2; i<=num; i++)
    {
        c=a+b;
        a=b;
        b=c;
    }
    printf("\n The Fibonnaci series %d is :%d \n ",num,b);

    return 0;
}
