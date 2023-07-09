
#include <stdio.h>
#include <stdlib.h>

//Ascending and Descending Order
void ascend_descend()
{
    int temp, n;
    char sw;
    
    printf("Enter the size of the array : ");
    scanf("%d",&n);
    int a[n];
    for (int i = 0 ; i < n ; i++)
    {
        printf("Enter the value %d : ", i + 1);
        scanf("%d", &a[i]);
    }
    
    for(int i=0;i < n;++i)
    {
        for(int j=i+1; j < n; ++j)
        {
            if (a[i]>a[j])
                {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
                }
        }
        printf("%d ",a[i]);
    }
    printf("\n");
    
    for (int i = n - 1; i >= 0;i--)
        printf("%d ",a[i]);
    printf("\n");
    
}

// Linear Search

int cmpfunc (const void * a, const void * b)
{
    return (*(int*)a - *(int*)b);
}


void linear_search()
{
    int search,i,n;
    
    printf("\nEnter the size of the array : ");
    scanf("%d",&n);
    
    int a[n];
    
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value %d : ", i + 1);
        scanf("%d", &a[i]);
    }
    
    
    qsort(a, n, sizeof(int), cmpfunc);
    
    system("clear");
    printf("Enter Search Element : ");
    scanf("%d",&search);
    
    for (i = 0; i < n;i++)
    {
        if (a[i] == search)
        {
            printf("Found at index value %d.",i+1);
            break;
        }

    }
    if (i == n)
        printf("Not Found.");
}

void main()
{
    ascend_descend();
    linear_search();
    
}

