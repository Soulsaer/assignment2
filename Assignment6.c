//   ASSIGNMENT--6

//Q.1 Write a program to calculate sum of first N natural numbers.

#include<stdio.h>
int main()
{
    int i=1,N,sum=0; 
    printf("Enter number of natural no. you want sum: ");
    scanf("%d",&N);
    while(N--)
    {
        sum = sum + i;
        i++;
    }
    printf("Sum: %d",sum);
    return 0;
}

//Q.2 Write a program to calculate sum of first N even natural numbers.

#include<stdio.h>
int main()
{
    int i=2,N,sum=0; 
    printf("Enter number of natural no. you want sum: ");
    scanf("%d",&N);
    while(N--)
    {
        sum = sum + i;
        i+=2;
    }
    printf("Sum: %d",sum);
    return 0;
}

//Q.3 Write a program to calculate sum of first N odd natural numbers.

#include<stdio.h>
int main()
{
    int i=1 ,N , sum=0;
    printf("Enter Number of odd numbers whose sum you want: ");
    scanf("%d",&N);
    while(N--)
    {
        sum = sum + i;
        i+=2;
    }
    printf("%d",sum);
    return 0;
}

//Q.4 Write a program to calculate sum of squares of first N natural numbers.

#include<stdio.h>
int main()
{
    int i=1 ,N , sum=0;
    printf("Enter number till whose sum of square you want: ");
    scanf("%d",&N);
    while(N--)
    {
        sum = sum + i*i;
        i++;
    }
    printf("%d",sum);
    return 0;
}

//Q.5 Write a program to calculate sum of cubes of first N natural numbers.

#include<stdio.h>
int main()
{
    int i=1 ,N , sum=0;
    printf("Enter number till whose sum of cube you want: ");
    scanf("%d",&N);
    while(N--)
    {
        sum = sum + i*i*i;
        i++;
    }
    printf("%d",sum);
    return 0;
}

//Q.6 Write a program to calculate factorial of a number.

#include<stdio.h>
int main()
{
    int N, Mul=1;
    printf("Enter number whose factorial you want: ");
    scanf("%d",&N);
    while(N>=1)
    {
        Mul = Mul * N ;
        N--;
    }
    printf("factorial: %d",Mul);
    return 0;
}

//Q.7 Write a program to count digits in a given number.
//this program can count no. of digit of a number with atmax 18 digits.
#include<stdio.h>
int main()   
{
    long long i;
    int count =0;
    printf("Enter a digit or number: ");
    scanf("%lld",&i);
    while(i>0)
    {
        i = i/10;
        count++;
    }
    printf("%d",count);
    return 0;
}

/* Q.8 Write a program to check whether a given number is a Prime number or
not */

#include<stdio.h>
int main()
{
   int i , N  ;
   int count =0;
   printf("Enter a Number: ");
   scanf("%d",&N);
   for(i=2;i<N;i++)
   {
    int rem = N%i;
    if(rem==0)
    {
        printf("Given number is not prime");
        break;
    }
    else
    {
        count++;
    }
   }
   if(count==N-2)
   {
    printf("Given number is prime");
   }
   return 0; 
}

//Q.9 Write a program to calculate LCM of two numbers.

#include<stdio.h>
int main()
{
    int i=1, a,b;  
    printf("Enter first number: ");
    scanf("%d",&a);
    printf("Enter second number: ");
    scanf("%d",&b);
    while(1)
    {
        if((i%a==0) && (i%b==0))
        {
            printf("%d",i);
            break;
        }
        i++;
    }
}

//Q.10 Write a program to reverse a given number.

//this program will reverse a number with at max 10 digits.
#include<stdio.h>
int main()
{
    int i=0 ; 
    printf("Enter the number you want to reverse: ");
    scanf("%d",&i);
    while(i>0)
    {
        printf("%d",i%10);
        i=i/10;
    }
    return 0;
}