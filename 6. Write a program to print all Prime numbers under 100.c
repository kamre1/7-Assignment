
#include<stdio.h>
int main()
{
    int j, i ;

    for(i=1; i<=100; i++)
    {

        for(j=2; j<i ; j++){

            if(i%j==0)
                break;
        }
        if(i==j)
            printf("%d\n",i);
        }
        return 0;
    }
