#include<stdio.h>
int main()
{
    int i, j,n, count;
    printf("Enter a Number:\n");
    scanf("%d",&n);
    for(i=n; i>0;i++)
        count=1;
        for(j=1; j<=i; j++)
    {
        if(i%j==0)

            count++;


    }
    if (count==2){
        printf("%d",i);
         break;



        }

}
