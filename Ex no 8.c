/*
Develop C program for the following:
    a) To find the sum of numbers using pointer and arrays.
    b) To perform the sorting of names using an array of pointers.
*/ 

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// summing the elements in array using pointer
void pointersum()
{
    int n = 0,sum = 0;
    printf("Enter the size of the array : ");
    scanf(" %d",&n);
    
    int arr[n];
    
    for (int i = 0 ; i < n ; i++)
    {
        printf("Enter the value %d : ",i + 1);
        scanf(" %d",arr + i);
    }
    
    for (int i = 0 ; i < n ; i++)
    {
        sum = sum + *(arr + i);

    }
    
    printf("The sum of the array is %d.",sum);
}

// sorting in array
void sortname()
{
    char arr[12][100] = {"Key","Jug","Ink","Horse","Godzilla","Friends",
    "Elephant","Dragon","Cat","Balls","Apple","Nuts"};
    int length = sizeof(arr) / sizeof(arr[0]);
    char temp[100];
    
    printf("The unsorted array : \n");
    
    for ( int i = 0 ; i < length ; i++)
    {
        printf("%s\n",arr[i]);
    }
    
    
    for (int i = 0 ; i < (length - 1) ; i++)
    {
        int j_min = i;
        for (int j = i + 1 ; j < length ; j++)
        {
            if (strcmp(arr[j],arr[j_min]) < 0)
                j_min = j;
        }
        
        if (j_min != i)
        {
            strcpy(temp,arr[i]);
            strcpy(arr[i],arr[j_min]);
            strcpy(arr[j_min],temp);
        }
        
    }
    printf("\n");
    printf("The sorted value : \n");
    
    for (int i = 0 ; i < length ; i++)
    {
        printf("%s\n",*(arr + i));
    }
    
    
    
}







int main()
{
    sortname();
    printf("\n");
    
    pointersum();
    
}




