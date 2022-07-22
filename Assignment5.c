//Q.1 Write a program to print MySirG N times on the screen

#include<stdio.h>
int main()
{
    int N ;
    printf("Enter how many times you want to print: ");
    scanf("%d",&N);
    while(N--)
    {
        printf("MySirG\n");
    }
    return 0;

}

//Q.2  Write a program to print the first N natural numbers.

#include<stdio.h>
int main()
{
    int i=1 , N ;
    printf("Enter number of values you want to print: ");
    scanf("%d",&N);
    while(N--)
    {
        printf("%d\n",i);
        i++;
    }
    return 0;
}

//Q.3 Write a program to print the first N natural numbers in reverse order

#include<stdio.h>
int main()
{
    int N ;
    printf("Enter value of numbers you want to reverse print: ");
    scanf("%d",&N);
    while(N>0)
    {
        printf("%d\n",N);
        N--;
    }
    return 0;
}

//Q.4 Write a program to print the first N odd natural numbers

#include<stdio.h>
int main()
{
    int i = 1 , N ;
    printf("Enter how many odd natural numbers you want: ");
    scanf("%d",&N);
    while(N--)
    {
        printf("%d\n",i);
        i+=2;
    }
    return 0;
}

//Q.5 Write a program to print the first N odd natural numbers in reverse order.

#include<stdio.h>
int main()
{
    int i=0 , N ;
    printf("Enter Total Odd numbers you want to enter: ");
    scanf("%d",&N);
    i = N*2 -1;
    while(N--)
    {
        printf("%d\n",i);
        i-=2;  
    }
    return 0;
}

//Q.6 Write a program to print the first N even natural numbers

#include<stdio.h>
int main()
{
    int i= 2 , N ;
    printf("Enter total even numbers you want to print: ");
    scanf("%d",&N);
    while(N--)
    {
        printf("%d\n",i);
        i+=2;
    }
    return 0;
}

//Q.7 Write a program to print the first N even natural numbers in reverse order

#include<stdio.h>
int main()
{
    int i = 1 ,N ;
    printf("Enter total even number you want in reverse: ");
    scanf("%d",&N);
    i = 2*N;
    while(N--)
    {
        printf("%d\n",i);
        i-=2;
    } 
    return 0;
}

//Q.8 Write a program to print squares of the first N natural numbers.

#include<stdio.h>
int main()
{
    int i ,N ;
    printf("Enter total number of square numbers you want: ");
    scanf("%d",&N);
    for(i=1;i<=N;i++)
    {
        printf("%d\n",i*i);
    }
    return 0;
}

//Q.9 Write a program to print cubes of the first N natural numbers.

#include<stdio.h>
int main()
{
    int i , N ;
    printf("Enter number of cubes of number you want: ");
    scanf("%d",&N);
    for(i=1;i<=N;i++)
    {
        printf("%d\n",i*i*i);
    }
    return 0;
}

//Q.10 Write a program to print a table of N.

#include<stdio.h>
int main()
{
    int i =1 , N;
    printf("Enter number whose table you want: ");
    scanf("%d",&N);
    while(i<=10)
    {
        printf("%d\n",N*i);
        i++;
    }
    return 0;

}