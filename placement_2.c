#include <stdio.h>

void pattern()
{
    int n = 7,mid;
    char str[7] = "PROGRAM";
    mid = n / 2;
    
    for(int i = 0; i < n; i++)
    {
        for(int j = mid; j <= (mid + i) ; j++)
        {
            printf("%c ",str[j % n]);
        }
        printf("\n");
    }
    printf("\n");
}

void max_min()
{
    int arr[] = {10, 4, 5, 3, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int max,k;

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] < arr[j])
            {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }

   for (int i = 0, k = n - 1; i <= n / 2; i++, k--)
    {
        if (i == k)
        {
            printf("%d ", arr[i]);
        } 
        else 
        {
            printf("%d %d ", arr[i], arr[k]);
        }
    }
    printf("\n\n");
}

void index_sorting()
{
    int arr[] = {5, 6, 1, 2, 8, 4, 3, 0};
    int index[] = {0, 1, 2, 3, 4, 5, 6,7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int max,k;

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
                
                temp = index[j];
                index[j] = index[i];
                index[i] = temp;
            }
        }
    }
    printf("The values after sort :\n");
    for(int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    printf("The Indexes after sort : \n");
    for(int i = 0; i < n; i++)
    {
        printf("%d ", index[i]);
    }
    
    printf("\n");
    printf("\n");
}

void odd_even()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int odd[n], even[n];
    int odd_index = 0, even_index = 0;

    for (int i = 0; i < n; i++)
    {
        (arr[i] % 2 != 0) ? (odd[odd_index++] = arr[i]) : (even[even_index++] = arr[i]);
    }
    printf("The ODD array Values :\n");
    for (int i = 0; i < odd_index; i++)
    {
        printf("%d ", odd[i]);
    }
    
    printf("\nThe EVEN array Values :\n");
    for (int i = 0; i < even_index; i++)
    {
        printf("%d ",even[i]);
    }

}

int main(void) {
    
    pattern();
    max_min();
    index_sorting();
    odd_even();

    return 0;
}