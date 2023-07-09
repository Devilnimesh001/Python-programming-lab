/*
Develop C program for the following...
    a) Printing the list of sbjects
    b) Arithmetic operations
    c) Area and perimeter of the circle
    d) Celsius to farenheit
    e) Swapping two numbers
    f) Checking leap year
    g) Salary Calculation
    h) Gst calculation
*/


#include <stdio.h>

#define no_of_string 5
#define max_sting_size 10 

#define pi 3.14

void subject()
{
    char subject[no_of_string][max_sting_size] = {"Tamil","English","Maths","Science","Social"};
    for (int i = 0 ; i < 5 ; i++)
    {
        printf("%s\n",subject[i]);
    }
    
    int sub;
    printf("Enter a number between 1-5:");
    scanf("%d", &sub);
    
    switch (sub)
    {
        case 1:
            printf("Tamil");
            break;
        case 2:
            printf("English");
            break;
        case 3:
            printf("Mathematics");
            break;
        case 4:
            printf("Science");
            break;
        case 5:
            printf("Social science");
            break;
        
    }
    printf("\n");
}

// Arithmetic operation

void arithmetic()
{
  int result;
  signed int a = 100;
  unsigned int b = 10;
  printf("1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5.Remainder\n");
  scanf("%d",&result);
  switch (result)
  {
    case 1:
        int sum = a + b;
        printf("The sum of %d and %d is %d\n",a,b,sum);
        break;
    case 2:
        int difference = a - b;
        printf("The difference of %d and %d is %d\n",a,b,difference);
        break;
    case 3:
        int multiply = a * b;
        printf("The multiplication of %d and %d is %d\n",a,b,multiply);
        break;
    case 4:
        double division = a / b;
        printf("The division of %d and %d is %.2lf\n",a,b,division);
        break;
    case 5:
        int modulus = a % 40;
        printf("The remainder of %d and 40 is %d\n",a,modulus);
        break;
    default:
        printf("Enter your choice correctly");
        break;
  } 
}

// Area and peimeter of circle



void circle()
{
    float area, radius, perimeter;
    printf("Enter the radius of the circle:\n");
    scanf("%f", &radius);
    area = pi * radius * radius;
    printf("The area of the circle is %.4f\n",area);
    perimeter = 2 * pi * radius;
    printf("The perimeter of the circle if %.4f\n",perimeter);
}

// conversion of celsius to farenheit

float convert_C_to_F(float c)
{
    return ((c * 9.0 / 5.0) + 32.0);
}

void C_to_F()
{
    float celsius , farenheit;
    printf("Enter the temperature in celsius:\n");
    scanf("%f", &celsius);
    farenheit = convert_C_to_F(celsius);
    printf("%.2f celsius = %.2f farenheit",celsius,farenheit);
    printf("\n");
    
} 

// swapping of two numbers

void swap()
{
    int a = 10, b = 20, c = 0;
    printf("Swapping with temporary variable:\n");
    printf("The values of a and b is %d and %d before swapping\n",a,b);
    c = a;
    a = b;
    b = c;
    printf("The values of a and b is %d and %d after swapping\n",a,b);
    //without temp variable
    printf("\nSwapping with temporary variable:\n");
    a = 10,b = 20;
    printf("the values of a and b is %d and %d before swapping\n",a,b);
    a ^= b;
    b ^= a;
    a ^= b;
    printf("The values of a and b is %d and %d after swapping",a,b);
} 

// checking leap year

void leapyear()
{
    int year;
    printf("Enter a year:\n");
    scanf("%d",&year);
    
    if (year % 400 == 0 && year % 100 == 0)
    {
        printf("%d is a leap year.\n",year);
    }
    else if (year % 4 == 0 && year % 100 != 0)
    {
        printf("%d is a leap year.\n", year);
    }
    else
    {
        printf("%d is not a leap year.\n",year);
    }
    
} 

// salary calculation

void salary()
{
    float da,hra,bs,gs;
    printf("\nEnter the Basic salary:\n");
    scanf("%f", &bs);
    da = (40*bs)/100;
    hra = (20*bs)/100;
    gs = da+hra+bs;
    printf("The Gross salary is: %.2f",gs);
    printf("\n");
    
} 

// GST calculation

void gst() 
{
    int price;
    int gst;
    int original_price;
    printf("Enter the Net price of the item:\n");
    scanf("%d", &price);
    printf("Enter the Original price:\n");
    scanf("%d", &original_price);
    gst = (((price - original_price) * 100) / original_price);
    printf("The GST is %d percentage", gst);
}



//main function

int main()
{
    subject();
    printf("\n");
    
    arithmetic();
    printf("\n");
    
    circle();
    printf("\n");
    
    C_to_F();
    printf("\n");
    
    swap();
    printf("\n");
    
    salary();
    printf("\n");
    
    gst();
}



