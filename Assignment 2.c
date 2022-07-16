//Q1 Write a program to print unit digit of a given number

#include<stdio.h>
int main()
{
    int i = 123 ; // let's assume given value is 123.
    printf("%d",i%10);
    return 0;
}


//Q.2 Write a program to print a given number without its last digit.

#include<stdio.h>
int main()
{
    int i = 123 ; // let's assume given value is 123.
    printf("%d",i/10);
    return 0 ;
}


//Q.3 Write a program to swap values of two int variables

#include<stdio.h>
int main()
{
    int a, b ,temp ;
    printf("Enter numbers want to swap");
    scanf("%d %d",&a,&b);
    temp = a ;
    a = b ;
    b = temp ; 
    printf("%d %d",a , b);
    return 0 ;
}

//Q.4 Write a program to swap values of two int variables without using a third variable.
#include<stdio.h>
int main()
{
    int a , b ;
    printf("Enter no.s to swap");
    scanf("%d %d",&a,&b);
    a = a+b;
    b = a-b;
    a = a-b;
    printf("%d %d",a,b);
    return 0 ;
}

//Q.5 Write a program to input a three-digit number and display the sum of the digits.

#include<stdio.h>
int main()
{
    int a, sum = 0;
    printf("Enter a three digit no.");
    scanf("%d",&a);
    while(a>0)
    {
        sum = sum + a%10 ;
        a=a/10;
    }
    printf("%d",sum);
    return 0;
}

//Q.6 Write a program which takes a character as an input and displays its ASCII code.
#include<stdio.h>
int main()
{
    char a ;
    printf("Enter the charcter: ");
    scanf("%c",&a);
    printf("%d",a);
    return 0 ;
}

//Q.7 Write a program to find the position of first 1 in LSB.
#include<stdio.h>
int main()
{
    int a , count=1;
    printf("Enter number :");
    scanf("%d",&a);
    while(a>0)
    {
       if(a%2==1)
       {
        printf("\n%dth digit from right is first 1  ",count);
        break;
       } 
       a=a/2;
       count++;
    }

}

//Q.8 Write a program to check whether the given number is even or odd using a bitwise operator.

#include<stdio.h>
int main()
{
    int a ;
    printf("Enter the number");
    scanf("%d",&a);
    if(a & 1 == 1)
    {
        printf("Odd");
    }
    else
    {
        printf("Even");
    }
    return 0;
}

//Q.9 Write a program to print size of an int, a float, a char and a double type variable

#include<stdio.h>
int main()
{
    int i ;
    float j ;
    char k;
    double l;
    printf("size of int is : %d bytes\n",sizeof(i));
    printf("size of float is : %d bytes\n",sizeof(j));
    printf("size of char is : %d bytes\n",sizeof(k));
    printf("size double is : %d bytes\n",sizeof(l));
    return 0 ;
}

//Q.10 Write a program to make the last digit of a number stored in a variable as zero.

#include<stdio.h>
int main()
{
    int i ;
    printf("Enter a Number");
    scanf("%d",&i);
    i = i - i%10;        // subtracting the decimal remainder.
    printf("%d",i);
    return 0;
}

/* Q.11 Write a program to input a number from the user and also input a digit. Append a
digit in the number and print the resulting number. */

#include<stdio.h>
//This program would append only single digit.
int main()
{
    int i , n ;
    printf("Enter the number : ");
    scanf("%d",&i);
    printf("Enter the digit you want to append :");
    scanf("%d",&n);
    i = i*10 + n;
    printf("%d",i);
    return 0;
}

/* Q.12 Assume price of 1 USD is INR 76.23. Write a program to take the amount in INR and
convert it into USD. */

#include<stdio.h>
int main()
{
    int I ;
    float U ;
    printf("Enter amount of INR : ");
    scanf("%d",&I);
    printf("Amount of USD in %d  is $ %.2f",I,U = 76.23 * I);
    return 0 ;
    
}

/* 13. Write a program to take a three-digit number from the user and rotate its digits by
one position towards the right. */

#include<stdio.h>
int main()
{
    int i,rem=0;
    printf("Enter a three digit no.");
    scanf("%d",&i);
    if(i>999)
    {
        printf("Error: Enter a three digit no. only ");
    }
    else
    {
        rem = i%10;                  //fetch the last digit 
        i = i/10;                   //remove the last digit 
        i = rem*100 + i ;          //add the last digit at the hundred's place
        printf("%d",i);
    }
    return 0;
}