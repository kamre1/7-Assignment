 #include<stdio.h>
 int main()
 {
     int num, fib1=0, fib2=1, fib3=0,count=0;
     printf("Enter a Number:\n");
     scanf("%d",&num);

     printf("first %d fibonnaci series are ....\n",num);

     printf("%d\n",fib1);
     printf("%d\n", fib2);

     count =2;

     while(count<=num)
     {
         fib3=fib1+fib2;
         count++;
         printf("%d\n",fib3);
         fib1=fib2;
         fib2=fib3;

     }
     return 0;
 }
