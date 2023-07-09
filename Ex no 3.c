/*
Develop C program for the following:
    a) Get input from the user, find the last digit, and identify whether the digit is Odd or Even.
    b) Checking Voting eligibility.
    c) Area of different shapes.
    d) Get student five subject mark and calculate grade.
*/ 

 
#include <stdio.h>
#include <math.h>

// factorial of a number
void factorial()
{
    int fact = 1,n;
    printf("Enter a number:");
    scanf("%d",&n);
    if (n==0)
    {
        printf("The factorial of 0 is 1\n");
    }
    else
    {
        for (int j = 1 ; j <= n ; j++)
        {
            fact *= j;
        }
        printf("The factorial of %d is %d\n",n,fact);
    }
     
}

// fibonacci series upto given number
void fibonacci()
{
    int x = 0, y = 1,range,z;
    printf("Enter the range for fibonacci series:");
    scanf("%d",&range);
    printf("%d\n",x);
    while (y < range)
    {
        printf("%d\n",y);
        z = x;
        x = y;
        y = z+y;
       
    }
}

// Armstrong number
void armstrong()
{
    int digit,digit_len,last_digit,i = 0,result = 0;
    printf("Enter the digits:");
    scanf("%d",&digit);
    int digits = digit;
    digit_len = (digit == 0) ? 1 : log10(digit)+1;
    while (i < digit_len)
    {
        last_digit = digit % 10;
        result += pow(last_digit,digit_len);
        digit /= 10;
        i++;
    }
    if (digits == result)
    {
        printf("%d is a armstrong number\n",digits);
    }
    else
    {
        printf("%d is not a armstrong number\n",digits);
    }
}

// prime number
void prime_number()
{
    int n,i,flag = 0;
    printf("Enter the number:");
    scanf("%d",&n);
    
    if (n==0 || n==1)
    {
        flag = 1;
    }
    
    for (i = 2 ; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            flag = 1;
            break;
        }
    }
    
    if (flag == 0)
    {
        printf("%d is a prime number\n",n);
    }
    else
    {
        printf("%d is not a prime number\n",n);
    }
}



int main()
{
    factorial();
    printf("\n");
    
    fibonacci();
    printf("\n");
    
    armstrong();
    printf("\n");
    
    prime_number();
}




