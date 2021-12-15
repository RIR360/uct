/*
>>>>> 2020 <<<<<
>>>>> Section A <<<<<
>>>>> Written by: Rizvy | RIR360 <<<<<
*/

// (1) Calculate the readius of a circle

#include <stdio.h>
int main()
{
  float radius, area;

  printf("Enter the radius of a circle: ");
  scanf("%f", &radius);

  area = 3.14159*radius*radius;

  printf("Area = %.2f\n", area);
  return 0;
}

// (2) Find all possible roots of a quardratic equation.

#include <math.h>
#include <stdio.h>

int main() {
    
    double a, b, c, dis, root1, root2, realPart, imagPart;
    
    printf("Enter coefficients of a, b and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    dis = b * b - 4 * a * c;

    // condition for real and different roots
    if (dis > 0) {
        root1 = (-b + sqrt(dis)) / (2 * a);
        root2 = (-b - sqrt(dis)) / (2 * a);
        printf("Root1 = %.2lf\n", root1);
        printf("Root2 = %.2lf\n", root2);
    }

    // condition for real and equal roots
    else if (dis == 0) {
        root1 = -b / (2 * a);
        printf("Root1 = %.2lf\n", root1);
        printf("Root2 = %.2lf\n", root1);
    }

    // if roots are not real
    else {
        realPart = -b / (2 * a);
        imagPart = sqrt(-dis) / (2 * a);
        printf("Root1 = %.2lf+%.2lfi\n", realPart, imagPart);
        printf("Root2 = %.2lf-%.2lfi\n", realPart, imagPart);
    }

    return 0;
} 


// (3) Reverse the digits of an integer number using while loop.

#include <stdio.h>

int main() {
    int n, rev = 0, remainder;
    printf("Enter an integer: ");
    scanf("%d", &n);
    
    while (n != 0) {
        remainder = n % 10;
        rev = rev * 10 + remainder;
        n /= 10;
    }
    
    printf("Reversed number = %d\n", rev);
    return 0;
}


// (4) Convert any integer to it's binary equivalent.

#include <stdio.h>

int main()
{
	int a[10], n, i;
	printf("Enter the number to convert: ");
	scanf("%d", &n);
	for (i = 0; n > 0; i++)
	{
		a[i] = n % 2;
		n = n / 2;
	}
	printf("Binary form: ");
	for (i = i - 1; i >= 0; i--)
	{
		printf("%d ", a[i]);
	}

	return 0;
}


// (5) Determine and calculate the sum of following harmonic series.
// Series form: (1/x^x + ...)

#include <stdio.h>
#include <math.h>

int main()
{
    int n, i;
    double sum = 0.0;
    
    printf("Enter n: ");
    scanf("%d", &n);
    
    for (i = 1; i <= n; i++)
    {
        sum += 1 / pow(i, i);
    }
    
    printf("Harmonic Sum: %lf\n", sum);
    
    return 0;
}


// (6) Compute the sum of the digits of a given number.

#include <stdio.h>

int main()
{
    int num;
    int sum = 0;
    
    printf("Enter number: ");
    scanf("%d", &num);
     
    while (num != 0)
    {
        sum += num % 10;
        num /= 10;
    }
    
    printf("Sum of the digits: %d\n", sum);

    return 0;
}


// (7) Check whether a string is palindrome or not.

#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int length = 0, i;
    
    printf("Enter String: ");
    gets(str);
    
    for(i = 0; str[i] != '\0'; i++, length++);
    
    for (i = 0; i < length; i++)
    {
        if (str[i] != str[length - i - 1])
        {
            printf("The string is not palindrome.\n");
            return 0;
        }
    }
    
    printf("The string is palindrome!\n");
    return 0;
}
