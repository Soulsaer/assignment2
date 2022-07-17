//Q.1 Write a program to check whether a given number is positive or non-positive.

#include<stdio.h>

int main()
{
    int i ;
    i = 123 ;           // let's assume given value is 123 
    
    if(i>0)
    {
        printf("Positive");
    }
    else
    {
        printf("Non-postive");
    }
}

//Q.2 Write a program to check whether a given number is divisible by 5 or not

#include<studio.h>

int main()
{
    int i ; 
    printf("Enter a Number");
    scanf("%d",&i);
    if(i%5==0)
    {
        printf("%d is divisible by 5");
    }
    else
    {
        printf("%d is not divisible by 5");
    }
    return 0;
}

 /* Q.3 Write a program to check whether a given number is an even number or an odd
number. */

#include<stdio.h>
int main()
{
    int i ;
    printf("Enter a Number :");
    scanf("%d",&i);
    if(i%2==0)
    {
        printf("%d is Even",i);
    }
    else
    {
        printf("%d is Odd",i);
    }
    return 0 ;
}

/* Q.4 Write a program to check whether a given number is an even number or an odd
number without using % operator. */

#include<stdio.h>
int main()
{
    int i ;
    printf("Enter a number");
    scanf("%d",&i);
    if(i & 1 == 1)
    {
        printf("%d is Odd",i);
    }
    else
    {
        printf("%d is Even",i);
    }
    return 0 ;
}

//Q.5 Write a program to check whether a given number is a three-digit number or not.

#include<stdio.h>
int main()
{
    int i ;
    printf("Enter a Number: ");
    scanf("%d",&i);
    if((i>99) && (i<999))
    {
        printf("%d is a three digit number",i);
    }
    else
    {
        printf("%d is not a three digit number",i);
    }
    return 0;
}

/* Q.6 Write a program to print greater between two numbers. Print one number of both are
the same. */

#include<stdio.h>
int main()
{
    int i ,j;
    printf("Enter two numbers :");
    scanf("%d %d",&i, &j);
    if(i>=j)
    {
        printf("Greater is %d",i);
    }
    else
    {
        printf("Greater is %d",j);
    }
    return 0;
}

/* Q.7 Write a program to check whether roots of a given quadratic equation are real &
distinct, real & equal or imaginary roots */

#include<stdio.h>
int main()
{
    int i, A, B, C, D;
    printf("A(x.x) + B(x) + C\n");
    printf("Enter of values of A :");
    scanf("\n%d",&A);
    printf("Enter of values of B :");
    scanf("\n%d",&B);
    printf("Enter of values of C :");
    scanf("\n%d",&C);
    D= B*B - 4*A*C;
    if(D>=0)
    {
        if(D>0)
        {
            printf("roots are real and distinct");
        }
        else
        {
            printf("Roots are real and Equal");
        }
    }
    else
    {
        printf("Roots are imaginary");
    }
    return 0;
}

// Q.8 Write a program to check whether a given year is a leap year or not.

#include<stdio.h>
int main()
{
    int i ;
    printf("Enter a Year: ");
    scanf("%d",&i);
    if(i%4==0)
    {
        if((i%100==0))
        {
            if(i%400==0)
            {
                printf("%d is a leap year",i);
            }
            else
            {
                printf("%d is not a leap year",i);
            }
        }
        else
        {
            printf("%d is a leap year",i);
        }
    }
    else
    {
        printf("%d is not a leap year",i);
    }
    return 0;
}

/* Q.9 Write a program to find the greatest among three given numbers. Print number once
if the greatest number appears two or three times. */

#include<stdio.h>
int main()
{
    int a, b, c;
    printf("Enter First number: ");
    scanf("%d",&a);
    printf("Enter Second number: ");
    scanf("%d",&b);
    printf("Enter Three number: ");
    scanf("%d",&c);
    if(a>b)
    {
        if(b>c)
        {
            printf("%d is greatest",a);
        }
        else
        {
            if(a>c)
            {
                printf("%d is greatest",a);
            }
            else
            {
                printf("%d si greatest",c);
            }
        }
    }
    else 
    {
        if(b>c)
        {
            printf("%d is greatest",b);
        }
        else
        {
            printf("%d is greatest",c);
        }
    }
}

/* Q.10. Write a program which takes the cost price and selling price of a product from the
user. Now calculate and print profit or loss percentage. */

#include<stdio.h>
int main()
{
    int a , b ;
    float profit=0,loss=0;
    printf("Enter Cost price: ");
    scanf("%d",&a);
    printf("Enter Selling price: ");
    scanf("%d",&b);
    if(b>a)
    {
        profit = ((float)(b-a)*100)/a;
        printf("profit= %.2f %%",profit);
    }
    else
    {
        loss = ((float)(a-b)*100)/a*100;
        printf("loss= %.2f %%",loss);
    }
    return 0;
}

/* Q.11 Write a program to take marks of 5 subjects from the user. Assume marks are given
out of 100 and passing marks is 33. Now display whether the candidate passed the
examination or failed. */

#include <stdio.h>
int main()
{
    int i, n = 5, count = 0;
    while (n--)
    {
        printf("Enter mark of subject: ");
        scanf("%d", &i);
        if (i <= 100)
        {
            if (i > 33)
            {
                count++;
            }
            else
            {
                printf("FAILED");
                break;
            }
        }
        else
        {
            printf("Marks can only between 1-100\n");
            break;
        }
    }
    if(count==5)
    {
        printf("PASSED");
    }
    return 0 ;
}

// Q.12 Write a program to check whether a given alphabet is in uppercase or lowercase.

#include<stdio.h>
int main()
{
    char i ;
    printf("Enter a character: ");
    scanf("%c",&i);
    if((i>=65)&&(i<=90))
    {
        printf("Character is Uppercase");
    }
    else
    {
        printf("Character is lowercase");
    }
    return 0;
}

//Q.13 Write a program to check whether a given number is divisible by 3 and divisible by 2.

#include<stdio.h>
int main()
{
    int i ;
    printf("Enter a Number: ");
    scanf("%d",&i);
    if((i%2==0)&&(i%3==0))
    {
        printf("%d is divisible by both 2 and 3",i);
    }
    else if(i%2==0)
    {
        printf("%d is divisible by 2 ",i);
    }
    else if(i%3==0)
    {
        printf("%d is divisible by 3",i);
    }
    else
    {
        printf("%d is not divisible by both 2 and 3",i);
    }
    return 0;
}

// Q.14 Write a program to check whether a given number is divisible by 7 or divisible by 3.

#include<stdio.h>
int main()
{
    int i ;
    printf("Enter a Number: ");
    scanf("%d",&i);
    if(i%3==0)
    {
        printf("%d is divisible by 3",i);
    }
    else if(i%7==0)
    {
        printf("%d is divisible by 7",i);
    }
    return 0;
}

//Q.15 Write a program to check whether a given number is positive, negative or zero.

#include<stdio.h>
int main()
{
    int i ;
    printf("Enter a number: ");
    scanf("%d",&i);
    if(i>0)
    {
        printf("%d is positive",i);
    }
    else if(i==0)
    {
        printf("%d is zero ",i);
    }
    else
    {
        printf("%d is negative");
    }
    return 0;
}

/* Q.16 Write a program to check whether a given character is an alphabet (uppercase), an
alphabet (lower case), a digit or a special character. */

#include<stdio.h>
int main()
{
    char i ;
    printf("Enter a Number: ");
    scanf("%c",&i);
    if((i>='A')&&(i<='Z'))
    {
        printf("%c is a Uppercase alphabet",i);
    }
    else if((i>='a') && (i<='z'))
    {
        printf("%c is a lowercase alphabet",i);
    }
    else if((i>=48)&&(i<=57))
    {
        printf("%c is a digit",i);
    }
    else 
    {
        printf("%c is a special character",i);
    }
    return 0;
}



/* Q.17 Write a program which takes the length of the sides of a triangle as an input. Display
whether the triangle is valid or not. */

#include<stdio.h>
int main()
{
    int a , b ,c ;
    printf("Enter length of 1st side: ");
    scanf("%d",&a);
    printf("Enter length of 2nd side: ");
    scanf("%d",&b);
    printf("Enter length of 3rd side: ");
    scanf("%d",&c);
    if((a+b>=c) || (a+c>b) || (b+c>a))
    {
        printf("Valid triangle");
    }
    else
    {
        printf("Invalid triangle");
    }
    return 0;
}


/* Q.18 Write a program which takes the month number as an input and display number of
days in that month */

#include<stdio.h>
int main()
{
    int i ;
    printf("Enter the number of month: ");
    scanf("%d",&i);
    if(i==2 || i==4 || i== 6 || i==9 || i==11)
    {
        if(i==2)
        {
            printf("%d have 28 days",i);
        }
        else
        {
            printf("%d have 30 days",i);
        }
    }
    else
    {
        printf("%d have 31 days",i);
    }
    return 0;
}