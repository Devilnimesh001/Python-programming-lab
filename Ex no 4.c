
#include <stdio.h>
#include <math.h>
#include <ctype.h>

// Odd and even in a list
void odd_even()
{
    int n, oddind = 0, evenind = 0;
    printf("Enter the size of the array : ");
    scanf("%d",&n);
    
    int arr[n], odd[n], even[n];
    for (int i =0 ; i < n ; i++)
    {
        printf("Enter the value %d : ",i + 1);
        scanf("%d",&arr[i]);
       
    }
    
    for (int i = 0 ; i < n ; i++)
    {
        if ( arr[i] % 2 == 0)
        {
            even[evenind] = arr[i];
            evenind += 1;
        }
        else
        {
            odd[oddind] = arr[i];
            oddind += 1;
        }
    }
    
    printf("ODD Numbers - ");
    for (int i = 0 ; i < oddind ; i++)
    {
        printf("%d ",odd[i]);
    }
    printf("\n");
    printf("EVEN Numbers - ");
    for (int i = 0 ; i < evenind ; i++)
    {
        printf("%d ",even[i]);
    }
    printf("\n");
}

//average height
void avg_height()
{
    int avg,sum,n;
    int a[100];
    printf("Enter Number of Persons : ");
    scanf("%d",&n);
    printf("Enter the value in cm: \n");
    for(int i=0;i <= n-1;i++)
    {
        printf("Enter value of person %d : ",i+1);
        scanf("%d",&a[i]);
    }
    for(int j=0;j<=n-1;j++){
        sum+=a[j];
    }
    avg=sum/n;
    printf("Average Heigth is : %d\n",avg);
    printf("\n");
}

//matrix
void mat()
{
    char input;
    printf("Enter Operations : \nS-Scaling\nT-Transpose\n");
    scanf("%c",&input);
    input = toupper(input);
    int i,j,rows,coloumns;
    printf("Enter Number of Rows : ");
    scanf("%d",&rows);
    printf("Enter Number of coloumns : ");
    scanf("%d",&coloumns);
    int a[rows][coloumns];
    printf("Enter value of the Matrix :\n");
        for(i=0;i<rows;++i)
        {
            for(j=0;j<coloumns;++j)
            {
                scanf("%d",&a[i][j]);
            }
        }
    switch( input )
    {
        case 'S':
            int scalar;
            printf("Enter the scalar value: ");
            scanf("%d",&scalar);
            for( i=0; i < rows ;++i)
            {
                for(j=0; j < coloumns;++j)
                {
                    printf("%d  ",a[i][j] * scalar);
                }
                printf("\n");
            }
            break;
        
        case 'T':
            printf("The transpose of the marix: \n");
            for(i=0;i<coloumns;++i)
            {
                for(j=0;j<rows;++j)
                {
                    printf("%d ",a[j][i]);
                }
                printf("\n");
            }
            break;
        
    }
    printf("\n");
}

// Body Mass Index
void BMI()
{
    int height;
    float BMI, weight, height_cm;
    printf("Enter the height(cm): ");
    scanf("%d",&height);
    height_cm = (float)height / 100;
    printf("Enter the weight(kg): ");
    scanf("%f",&weight);
    BMI = weight / pow(height_cm,2);
    printf("The BMI value is %.2f", BMI);
}

int main()
{
    mat();
    printf("\n");
    
    avg_height();
    printf("\n");

    odd_even();
    printf("\n");
    
    BMI();
    
}

