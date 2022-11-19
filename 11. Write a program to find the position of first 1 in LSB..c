
#include<stdio.h>
int main()
{

    int num;

    printf("Enter A Number:\n");
    scanf("%d",&num);

    if(num&1)
        printf("LSB  %d is set(1)",num);
    else
        printf("LSB   %d is set(0)",num);

    return 0;
}
