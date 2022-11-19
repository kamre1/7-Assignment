 #include<stdio.h>
 int main()
 {
     int num, fib1=0, fib2=1, fib3=0,count=0;
     printf("Enter a Number:\n");
     scanf("%d",&num);

    count =2;
    int flag = 1;
     while(count<=num)
     {
         fib3=fib1+fib2;
         count++;
        if(num==fib3){
            printf("yes, Given number is in the Fibonnaci series ");
            flag = 0;
        }
         fib1=fib2;
         fib2=fib3;

     }
     if(flag) printf("Given Number is not in Fibonnaci series:");
     return 0;
 }
