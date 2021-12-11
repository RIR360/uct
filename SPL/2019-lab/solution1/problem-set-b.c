/*
>>>>> 2019 <<<<<
>>>>> Section B <<<<<
>>>>> Written by: RIR360 <<<<<
*/


// (1) Multiply two matrices

#include <stdio.h>

int main()
{
    int n, m, n1, m1;
    
    printf("Enter first matrix rows and columns: ");
    scanf("%d%d", &n, &m);
    int mat1[n][m];
    
    // taking user input
    
    printf("Enter Matrix(%dX%d):\n", n, m);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &mat1[i][j]);
        }
    }
    
    printf("Enter second matrix rows and columns: ");
    scanf("%d%d", &n1, &m1);
    int mat2[n1][m1];
    
    if (m != n1)
    {
        printf("Matrices can't be multiplied\n");
        return 1;
    }
    
    printf("Enter Matrix(%dX%d):\n", n1, m1);
    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < m1; j++) {
            scanf("%d", &mat2[i][j]);
        }
    }
    
    // multiplication process
    
    int mat3[n][m1];
    int sum = 0;
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m1; j++) {
            for (int k = 0; k < m; k++)
            {
                sum += mat1[i][k] * mat2[k][j];
            }
            mat3[i][j] = sum;
            sum = 0;
        }
    }
    
    // displaying output matrix
    
    printf("Output Matrix(%dX%d): \n", n, m1);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m1; j++) {
            printf("%d ", mat3[i][j]);
        }
        printf("\n");
    }

    return 0;
}


// (2) Evaluate the expression using user defined functions.
Series: x - x^3/3! + x^5/5! - x^7/7! ...

#include <stdio.h>

float calculate(int x, int n);
int factorial(int n);

int main()
{
    int x, n;
    
    printf("Enter X: ");
    scanf("%d", &x);
    printf("Enter N: ");
    scanf("%d", &n);
    
    printf("Sum of the series: %f\n", calculate(x, n));
}

float calculate(int x, int n)
{
    float sum = 0;
    int i;
    for(i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
            sum -= x^(2 * i - 1)/factorial(2 * i - 1);
        else
            sum += x^(2 * i - 1)/factorial(2 * i - 1);
    }
}

int factorial(int n)
{
    int i, fact = 1;
    for (i = 2; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}


// (3) Using array of structures read the number of three subjects for n students and sort them according to their position.

#include <stdio.h>

struct student {
    char name[45];
    int roll;
    float sub1, sub2, sub3, total;
};

int main()
{
    int n, i, j;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    
    struct student students[n];
    for (i = 0; i < n; i++)
    {
        printf("Enter Student-%d info.\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name);
        
        printf("Roll: ");
        scanf("%d", &students[i].roll);
        
        printf("Subject 1 Mark: ");
        scanf("%f", &students[i].sub1);
        
        printf("Subject 2 Mark: ");
        scanf("%f", &students[i].sub2);
        
        printf("Subject 3 Mark: ");
        scanf("%f", &students[i].sub3);
        
        students[i].total = students[i].sub1 + students[i].sub2 + students[i].sub3;
    }
    
    struct student temp;
    
    for(i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (students[i].total > students[j].total)
            {
                temp = students[i];
                students[i] = students[j];
                students[j] = temp;
            }
        }
    }
    
    printf("\nStudent Position:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d %s %.2f\n", students[i].roll, students[i].name, students[i].total);
    }
}










