#include<stdio.h>

void ODD_EVEN()
{
    int input, a;
    printf("Enter the digits:");
    scanf("%d",&input);
    while (input)
    {
        a = input % 10;
        if(a%2!=0)
        {
            printf("%d-ODD\n",a);
        }
        else
        {
            printf("%d-EVEN\n",a);
        }
        input /= 10;
    }
}

// Voting

void voting()
{
    int age;
    printf("Enter the age:");
    scanf("%d",&age);
    (age >= 18)? printf("You\'re eligible for voting\n") : printf("You\'re not eligible for voting\n");
}

// shapes

void shapes()
{
 
    char input;
    printf("Enter the shape - 'S'-Square,'T'-Triangle,'C'-Circle,'R'-Rectangle,'P'-Parallelogram\n");
    scanf(" %c",&input);
    input = toupper(input);
    switch (input)
    {
        case 'S':
        float side;
        printf("Enter the value of side:\n");
        scanf("%f",&side);
        printf("The area square: %.2f\n",side*side);
        break;
     
        case 'T':
        float base,height;
        printf("Enter the values of base and height:\n");
        scanf("%f %f",&base,&height);
        printf("The area of the triangle: %.2f\n",(base*height)/2);
        break;
     
        case 'C':         
        float radius;
        printf("Enter the value of radius:\n");
        scanf("%f",&radius);
        printf("The area of the circle: %.2f\n",3.14*radius*radius);
        break;
     
        case 'R':
        float length,breadth;
        printf("Enter the values of length and breadth:\n");
        scanf("%f %f",&length,&breadth);
        printf("The area of rectangle: %.2f\n",length*breadth);
        break;
     
        case 'P':
        float b,h;
        printf("Enter the values of the base and height:\n");
        scanf("%f %f",&b ,&h);
        printf("The area of parallelogram: %.2f\n",b*h);
        break;
    }
}

// student grade


void grade()
{
    int a[5],i,total=0,condition1=0,condition=0;
    for (i=0;i<5;i++) 
    {
        printf("Enter the subject mark%d:",i+1);
        scanf("%d",&a[i]);
        if (a[i]>100 || a[i]<0)
        {
            printf("Please enter correct mark.");
            condition1++;
            break;
        }
     
        total+=a[i];
    }
    if (condition1 == 0)
    {
        for (int j=0;j<5;j++)
        {
            if (a[j]<50)
            {
                printf("fail.");
                condition++;
                break;
            }
        }
        if(condition == 0)
        {
            switch(total)
            {
                case 250 ... 299:
                    printf("D Grade.");
                    break;
                case 300 ... 349:
                    printf("C Grade.");
                    break;
                case 350 ... 399:
                    printf("B Grade.");
                   break;
                case 400 ... 449:
                    printf("A Grade.");
                    break;
                case 450 ... 500:
                    printf("S Grade.");
                    break;
            }
        }
    }    
}

int main()
{
    ODD_EVEN();
    printf("\n");
    
    voting();
    printf("\n");
    
    shapes();
    printf("\n");
    
    grade();
    printf("\n");
}










