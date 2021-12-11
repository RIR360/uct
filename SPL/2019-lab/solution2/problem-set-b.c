/*
>>>>> 2019 <<<<<
>>>>> Section B <<<<<
*/

// (1) Multiply two matrices

#include<stdio.h>

int main()
{
    int n, m, c, d, p, q, k, first[10][10], second[10][10], pro[10][10],sum = 0;

    printf("\nEnter the number of rows and columns of the first matrix: \n\n");
    scanf("%d%d", &m, &n);

    printf("\nEnter the %d elements of the first matrix: \n\n", m*n);
    for(c = 0; c < m; c++)   // to iterate the rows
        for(d = 0; d < n; d++)   // to iterate the columns
            scanf("%d", &first[c][d]);

    printf("\nEnter the number of rows and columns of the first matrix: \n\n");
    scanf("%d%d", &p, &q);

    if(n != p)
        printf("Matrices with the given order cannot be multiplied with each other.\n\n");

    else    // matrices can be multiplied
    {
        printf("\nEnter the %d elements of the second matrix: \n\n",m*n);

        for(c = 0; c < p; c++)   // to iterate the rows
            for(d = 0; d < q; d++)   // to iterate the columns
                scanf("%d", &second[c][d]);

        // printing the first matrix
        printf("\n\nThe first matrix is: \n\n");
        for(c = 0; c < m; c++)   // to iterate the rows
        {
            for(d = 0; d < n; d++)   // to iterate the columns
            {
                printf("%d\t", first[c][d]);
            }
            printf("\n");
        }

        // printing the second matrix
        printf("\n\nThe second matrix is: \n\n");
        for(c = 0; c < p; c++)   // to iterate the rows
        {
            for(d = 0; d < q; d++)   // to iterate the columns
            {
                printf("%d\t", second[c][d]);
            }
            printf("\n");
        }

        for(c = 0; c < m; c++)   // to iterate the rows
        {
            for(d = 0; d < q; d++)   // to iterate the columns
            {
                for(k = 0; k < p; k++)
                {
                    sum = sum + first[c][k]*second[k][d];
                }
            pro[c][d] = sum;    // resultant element of pro after multiplication
            sum = 0;    // to find the next element from scratch
            }
        }

        // printing the elements of the product matrix
        printf("\n\nThe multiplication of the two entered matrices is: \n\n");
        for(c = 0; c < m; c++)   // to iterate the rows
        {
            for(d = 0; d < q; d++)   // to iterate the columns
            {
                printf("%d\t", pro[c][d]);
            }
            printf("\n"); // to take the control to the next row
        }
    }

    return 0;
}


// (2) Evaluate the expression using user defined functions.
// Series: x - x^3/3! + x^5/5! - x^7/7! ...

#include <stdio.h>
#include <stdlib.h>

float cal(int,int);

int main()
{
    int x,n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    printf("Enter the value of x: ");
    scanf("%d",&x);
    float sum=cal(x,n);
    printf("Sum: %f",sum);
    return 0;
}

float cal(int x_value, int n_value){
float ans=0.0;
for(int i=1;i<=n_value;i++){
     if(i%2==0){
            ans= ans-pow(x_value,2*i-1)/factorial(i);
        }
        else{
            ans= ans+pow(x_value,2*i-1)/factorial(i);
        }
}
return ans;
}

void factorial(int i_value){
int fact=1,j;
for(int j=2*i_value-1;j>=1;j--){
                fact=fact*j;
        }
}


// (3) Using array of structures read the number of three subjects for n students and sort them according to their position.

#include<stdio.h>

/* Declaration of structure */
struct student
{
 char name[30];
 int roll;
 float sub1, sub2, sub3;
 float total;
};

int main()
{
/* Declaration of array of structure */
 struct student s[20], temp;
 int n;
 printf("Enter total students number: \n");
 scanf("%d",&n);

 for(int i=0;i<n;i++)
 {
  printf("\n\nEnter name of student: ");
  scanf("%s",&s[i].name);
  printf("Enter Roll: ");
  scanf("%d",&s[i].roll);
  printf("Enter Subject_1 Mark: ");
  scanf("%f",&s[i].sub1);
  printf("Enter Subject_2 Mark: ");
  scanf("%f",&s[i].sub2);
  printf("Enter Subject_1 Mark: ");
  scanf("%f",&s[i].sub3);

  s[i].total = s[i].sub1+s[i].sub2+s[i].sub3;
 }
// Compare the numbers
 for(int i=0;i< n-1;i++){
  for(int j=i+1;j< n;j++){
   if(s[i].total<s[j].total){
        temp = s[i];
        s[i] = s[j];
        s[j] = temp;
   }
  }
 }
 // Print the result
 for(int k=0;k<n;k++){
    printf("\n\n[%d]\nName: %s\n",k+1, s[k].name);
    printf("Roll: %d\n",s[k].roll);
    printf("Total: %.2f\n",s[k].total);
 }


 return 0;
}


// (4) Calculate the sum of the numbers of an array using pointers

#include <stdio.h>

int main()
{
   float sum=0.0;
   int i,n;
   float *pt;

   printf(" Input the number of elements to store in the array: ");
   scanf("%d",&n);
   float arr1[n];

   for(i=0;i<n;i++){
	  printf(" element - %d : ",i+1);
	  scanf("%f",&arr1[i]);
	  }

   pt = arr1; // pt store the base address of array arr1

   for (i = 0; i < n; i++) {
      sum = sum + *pt;
      pt++;
   }

   printf("Sum : %.2f\n\n", sum);


  return 0;
}


// (5) Copy the elements of one file into another

#include <stdio.h>
#include <stdlib.h> // For exit()

int main()
{
    FILE *fptr1, *fptr2;
    char filename[100], c;

    printf("Enter the filename to open for reading \n");
    scanf("%s", filename);

    // Open one file for reading
    fptr1 = fopen(filename, "r");
    if (fptr1 == NULL)
    {
        printf("File does not found or error in opening!! \n");
        exit(0);
    }

    printf("Enter the filename to open for writing \n");
    scanf("%s", filename);

    // Open another file for writing
    fptr2 = fopen(filename, "w");
    if (fptr2 == NULL)
    {
        printf("File does not found or error in opening.!! \n");
        exit(0);
    }

    // Read contents from file
    c = fgetc(fptr1);
    while (c != EOF)
    {
        fputc(c, fptr2);
        c = fgetc(fptr1);
    }

    printf("\nContents copied to %s", filename);

    fclose(fptr1);
    fclose(fptr2);
    return 0;
}

// (6) Read data from keyboard write it to the input file, read data from the same file and print to the console

#include <stdio.h>
#include <stdlib.h>

int main() {
    char sentence[1000],ch;

    // creating file pointer to work with files
    FILE *fptr1, *fptr2;

    // opening file in writing mode
    fptr1 = fopen("INPUT.txt", "w");

    // exiting program
    if (fptr1 == NULL) {
        printf("Error!");
        exit(1);
    }
    printf("Enter a sentence:\n");
    fgets(sentence, sizeof(sentence), stdin);
    fprintf(fptr1, "%s", sentence);
    fclose(fptr1);

    fptr2=fopen("INPUT.txt","r");

     if(fptr2 == NULL){
        /* Unable to open file hence exit */
        printf("Unable to open file.\n");
        printf("Please check whether file exists and you have read privilege.\n");
        exit(1);
    }


    /* File open success message */
    printf("\n File opened successfully. Reading file contents character by character. \n\n");
    do
    {
        /* Read single character from file */
        ch = fgetc(fptr2);

        /* Print character read on console */
        putchar(ch);

    } while(ch != EOF); /* Repeat this if last read character is not EOF */


    /* Done with this file, close file to release resource */
    fclose(fptr2);


    return 0;
}

