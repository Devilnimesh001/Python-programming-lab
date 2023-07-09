/*
Develop C program for the following:
    a) Sine-series.
    b) Swapping-Call by value and Call by reference.
    c) Binary Search using recursive function.
*/ 
 
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#define PI 3.14159265

// Function to swap two integers using call by value
void swapByValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}

// Function to swap two integers using call by reference
void swapByReference(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int swap() {
    int num1,num2;
    printf("Enter the number 1 : ");
    scanf(" %d",&num1);
    
    printf("Enter the number 2 : ");
    scanf(" %d",&num2);    

    printf("Before swapping:\n");
    printf("num1 = %d\n", num1);
    printf("num2 = %d\n", num2);

    // Swapping using call by value
    swapByValue(num1, num2);

    printf("\nAfter swapping using call by value:\n");
    printf("num1 = %d\n", num1);
    printf("num2 = %d\n", num2);

    // Swapping using call by reference
    swapByReference(&num1, &num2);

    printf("\nAfter swapping using call by reference:\n");
    printf("num1 = %d\n", num1);
    printf("num2 = %d\n", num2);

    return 0;
}

int mycmp(const void * a, const void * b)
{
    return(*(int*)a - *(int*)b);
}

int binarySearchRecursive(int arr[], int low, int high, int target) {
    if (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target) {
            return mid;
        } else if (arr[mid] > target) {
            return binarySearchRecursive(arr, low, mid - 1, target);
        } else {
            return binarySearchRecursive(arr, mid + 1, high, target);
        }
    }

    return -1;
}

int binarysearch() {
    
    int n,j = 0;
    printf("Enter the size of the array : ");
    scanf(" %d",&n);
    int arr[n];
    
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value %d : ",i + 1);
        scanf("%d", &arr[i]);
    }
    
    system("clear");
    
    int size = sizeof(arr) / sizeof(arr[0]);
    while(j < 3) // three chances 
    {
        int target;
        printf("Enter the element to search: ");
        scanf("%d", &target);
    
        int result = binarySearchRecursive(arr, 0, size - 1, target);
    
        if (result == -1) {
            printf("Element not found.\n");
        } else {
            printf("Element found at index %d.\n", result);
            break;
        }
        j++;
    }
    return 0;
}

int sine_series() {
    double angle_degrees;
    printf("Enter the angle in degrees: ");
    scanf("%lf", &angle_degrees);

    // Convert angle from degrees to radians
    double angle_radians = angle_degrees * PI / 180.0;

    // Compute sine using the sin() function
    double sine = sin(angle_radians);

    printf("Sine of %.2lf degrees is %.4lf\n", angle_degrees, sine);

    return 0;
}

void main()
{
    swap();
    printf("\n");
    
    binarysearch();
    printf("\n");
    
    sine_series();
}
