#include<stdio.h>
int main()
{
    int temp,n,r,sum;
    printf("Enter  Three digit Number: ");
  //  scanf("%d",&n);
      temp=n;
      sum=0;
   for(n=1; n<=1000; n++)

    while(n>0)
    {
        r=n%10;

        sum =sum+ (r*r*r);
        n=n/10;
    }
    if(temp==sum)
        printf("armstrong Number");
    else
        printf("Not armstrong Number");

    return 0;
}
