/*
>>>>> 2019 <<<<<
>>>>> Section A <<<<<
*/

// (1) Calculate the first m fibonacci numbers using a do-while loop.

#include <stdio.h>

int main()
{
   int n;
   printf("Enter Number of Fibonacci Values Needed :");
   scanf("%d",&n);
   int i=1,f=0, f1=1, f2=1;
   do{
    i++;
    printf("%d\t",f);
    f1=f2;
    f2=f;
    f=f1+f2;
   } while (i<=n);
}


// (2) Find all possible roots of a quardratic equation.

#include <stdio.h>
#include <stdlib.h>



int main() {
    double a, b,c, root1, root2,discriminant, realPart, imagPart;
    printf("Enter the number of a: ");
    scanf("%lf", &a);
    printf("Enter the number of b: ");
    scanf("%lf", &b);
    printf("Enter the number of c: ");
    scanf("%lf", &c);
    discriminant= b*b-(4*a*c);

    if(discriminant==0){
        root1=root2=-b/2*a;
        printf("root1 = root2 = %.2lf", root1);
    }
    else if(discriminant>0){
        root1=(-b+sqrt(discriminant))/(2*a);
        root2=(-b-sqrt(discriminant))/(2*a);
        printf("root1 = %.2lf\nroot2= %.2lf", root1, root2);
    }
    else{
        realPart=-b/(2*a);
        imagPart=sqrt(-discriminant)/(2*a);
        printf("root1 = %.2lf+%.2lfi\nroot2 = %.2f-%.2fi", realPart, imagPart, realPart, imagPart);



    }

    return 0;
}


// (3) Reverse the digits of an integer number using while loop.

#include <stdio.h>

int main()
{
   int n, rem, rev=0;
   printf("Enter the value of n: ");
   scanf("%d",&n);
   printf("Reverse of %d is : ",n);
   while(n!=0){
    rem=n%10;
    rev = rev*10+rem;
    n=n/10;
   }
   printf("%d",rev);
   return 0;
}


// (4) Convert any integer to it's binary equivalent.

#include <stdio.h>
#include <stdlib.h>

int main()
{
   int i=0, j, n, rem;
   printf("Enter a decimal number: ");
   scanf("%d",&n);
   int a[n];
   printf("Binary of %d is ",n);
   while(n!=0){
        rem=n%2;
        n=n/2;
        a[i]=rem;
        i++;
   }
   for(j=i-1; j>=0;j--){
    printf("%d",a[j]);
   }

    return 0;
}

// (5) Determine and calculate the sum of following harmonic series.
// Series form: (1/x^x + ...)

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int n, i;
    float sum= 0.0;
    printf("Enter The Value of n : ");
    scanf("%d", &n);

    for(i=1; i<=n; i++){
        sum = sum+(1/pow(i,i));
    }
    printf("Result Is: %f",sum);
    return 0;
}


// (6) Compute the sum of the digits of a given number.

#include <stdio.h>

int main()
{
   int n, rem, sum=0;
   printf("Enter the value of n: ");
   scanf("%d",&n);
   while(n!=0){
    rem=n%10;
    sum =sum+rem;
    n=n/10;
   }
   printf("Sum: %d",sum);
   return 0;
}



// (7) Check whether a string is palindrome or not.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char s1[100],s2[100];
    int len=0,i=0,j;
    printf("Enter a string: ");
    gets(s1);

    while(s1[i]!='\0'){

        i++;
        len++;
    }

    for(j=0,i=len-1;i>=0;j++,i--){
        s2[j]=s1[i];
    }
    s2[j]='\0';

    int d=strcmp(s1,s2);

    if(d==0){
        printf("Given String is Palindrome");
    }
    else{
        printf("Given String is not Palindrome");
     }

    return 0;
}
