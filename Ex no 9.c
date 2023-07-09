#include <stdio.h>
#include <string.h>
#include <math.h>

//salary slip

struct employee
{
    char name[20];
    int emp_id,b_sal;
    float gross,net;
};
void space(int len)
{
    char c = ' ';
    for (int i = 0; i < len; i++)
    {
        printf("%c",c);
    }
}
void display( struct employee emp[10], int n)
{
    int i, len = n;
    printf("Employees ID   Employee name    Net salary\n");
    for ( i = 0 ; i < len ; i++)
    {
        
        printf("%d\t\t      %s\t\t   %d\n",emp[i].emp_id,emp[i].name,emp[i].net);
        
    }
    return 0;
}

void salary_slip()
{
    int i,n;
    float hra,da,tax;
    
    printf("Enter the no. of employees : ");
    scanf("%d",&n);
    
    struct employee emp[n];
    
    for ( i = 0 ; i < n ; i++)
    {
        printf("Enter the employee %d name : ",i + 1);
        scanf(" %[^\n]s",emp[i].name);
        
        printf("Enter the emloyee %d ID : ",i + 1);
        scanf(" %d",&emp[i].emp_id);
        
        printf("Enter the Basic Salary : ");
        scanf(" %d",&emp[i].b_sal);
        
        hra = ((10 * emp[i].b_sal) / 100);
        da = ((35 * emp[i].b_sal) / 100);
        tax = ((15 * emp[i].b_sal) / 100);
        
        emp[i].gross = emp[i].b_sal + hra +da;
        emp[i].net = emp[i].gross - tax;
        
        printf("\n");
    }
    
    printf("\n");
    display(emp,n);
    
}

// student total marks

struct studentmark
{
    char name[20];
    int rollno;
    float average;
    int mark[5];
    char grade;
};

void display1(struct studentmark std[10],int n)
{
    int i,len = n;
    
    for ( i = 0 ; i < len ; i++)
    {
        printf("Student Name : %s\n", std[i].name);
        printf("Roll No. : %d\n", std[i].rollno);
        printf("Average : %.2f\n", std[i].average);
        printf("Grade : %c\n", std[i].grade);
        printf("\n");
        
    }
}

void studentsmark()
{
    int i = 0,n,j;
    
    printf("Enter the No. of Students : ");
    scanf("%d",&n);
    
    struct studentmark std[n];
    
    for (j = 0 ; j < n ; j++)
    {
        printf("Enter the Student %d name : ",j + 1);
        scanf(" %[^\n]s",std[j].name);
        
        printf("Enter the Student %d Roll No. : ",j + 1);
        scanf(" %d", &std[j].rollno);
        
        printf("Enter the Subject %d mark : ",i + 1);
        scanf(" %d", &std[j].mark[i]);
        
        printf("Enter the Subject %d mark : ",i + 2);
        scanf(" %d", &std[j].mark[i + 1]);
        
        printf("Enter the Subject %d mark : ",i + 3);
        scanf(" %d", &std[j].mark[i + 2]);
        
        printf("Enter the Subject %d mark : ",i + 4);
        scanf(" %d", &std[j].mark[i + 3]);
        
        printf("Enter the Subject %d mark : ",i + 5);
        scanf(" %d", &std[j].mark[i + 4]);
        
        int total = std[j].mark[i] + std[j].mark[i + 1] + std[j].mark[i + 2] + std[j].mark[i + 3] + std[j].mark[i + 4];
        
        std[j].average = (float)total / 5;
        
        switch(total)
        {
            case 450 ... 500:
                std[j].grade = 'A';break;
            case 400 ... 449:
                std[j].grade = 'B';break;
            case 350 ... 399:
                std[j].grade = 'C';break;
            case 200 ... 349:
                std[j].grade = 'D';break;
            case 150 ... 199:
                std[j].grade = 'E';break;
            case 0 ... 149:
                std[j].grade = 'F';break;
        }
        
        printf("\n");
        
    }
    
    display1(std,n);
    
}

// Nested structure

struct address
{
  char city[20];
  int pin;
  char phone[10];
};

struct employees
{
  char name[20];
  struct address add;
};

void nested_structure()
{
    struct employees emp;
 
    printf("Enter employee name : ");
    scanf(" %[^\n]s",emp.name);
    
    printf("Employee City : ");
    scanf(" %s",emp.add.city);
    
    printf("Pincode : ");
    scanf(" %d", &emp.add.pin);
    
    printf("Enter phone No. : ");
    scanf(" %s", emp.add.phone);
    
    printf("\n");
    
    printf("Employee Information : \n");
    printf("Name : %s\n",emp.name);
    printf("city : %s\n",emp.add.city);
    printf("Pincode : %d\n",emp.add.pin);
    printf("Phone No. : %s",emp.add.phone);
    
}

int main()
{
    salary_slip();
    printf("\n");
    
    studentsmark();
    printf("\n");
    
    nested_structure();
}

