//Q.1 Write a program to print MySirG 5 times on the screen

#include<stdio.h>
int main()
{
    int i=5;
    while(i--)
    {
        printf("MySirG\n");
    }
    return 0;
}

// Q.2 Write a program to print the first 10 natural numbers.

#include<stdio.h>
int main()
{
    int i = 1 ;
    while(i<11)
    {
        printf("%d\n",i);
        i++;
    }
    return 0;
}

//Q.3 Write a program to print the first 10 natural numbers in reverse order

#include<stdio.h>
int main()
{
    int i =10;
    while (i>0)
    {
        printf("%d\n",i);
        i--;
    }
    return 0;
}

//Q.4 Write a program to print the first 10 odd natural numbers

#include<stdio.h>
int main()
{
    int i=1 ;
    while(i<20)
    {
        printf("%d\n",i);
        i+=2;
    }
    return 0;
}

// Q.5 Write a program to print the first 10 odd natural numbers in reverse order.

#include<stdio.h>
int main()
{
    int i=19 ;
    while(i>0)
    {
        printf("%d\n",i);
        i-=2;

    }
    return 0;
}

//Q.6 Write a program to print the first 10 even natural numbers

#include<stdio.h>
int main()
{
    int i = 2 ;
    while(i<=20)
    {
        printf("%d\n",i);
        i+=2;
    }
    return 0;
}

//Q.7 Write a program to print the first 10 even natural numbers in reverse order.

#include<stdio.h>
int main()
{
    int i = 20 ;
    while(i>=2)
    {
        printf("%d\n",i);
        i-=2;
    }
    return 0;
}

//Q.8 Write a program to print squares of the first 10 natural numbers.

#include<stdio.h>
int main()
{
    int i=1;
    while(i<=10)
    {
        printf("%d\n",i*i);
        i++;
    }
    return 0;
}

//Q.9 Write a program to print cubes of the first 10 natural numbers

#include<stdio.h>
int main()
{
    int i=1;
    while(i<=10)
    {
        printf("%d\n",i*i*i);
        i++;
    }
    return 0;
}

//Q.10 Write a program to print a table of 5.

#include<stdio.h>
int main()
{
    int i=1;
    while(i<=10)
    {
        printf("%d\n",5*i);
        i++;
    }
    return 0;
}