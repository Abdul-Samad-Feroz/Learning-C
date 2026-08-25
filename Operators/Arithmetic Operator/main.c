#include <stdio.h>

int main()
{
       int x = 10;
       int y = 3;
       // Addition
       printf("\n%i", x + y);
       // Subtraction
       printf("\n%i", x - y);
       // Multiplication
       printf("\n%i", x % y);
       // Division
       printf("\n%i", x / y);
       // Modulus
       printf("\n%i", x % y);
       // Increment
       ++x;
       printf("%i", x);
       // Decrement
       --y;
       printf("\n%i", y);

       // Dynamic Calculator
       // Method 1
       float num1, num2;
       printf("\nEnter Fisrst Number");
       scanf("%f", &num1);
       printf("Enter Second Number");
       scanf("%f", &num2);

       printf("\nThe Addition of First and Second number is: %f", num1 + num2);
       printf("\nThe Subtraction of First and Second number is: %f", num1 - num2);
       printf("\nThe Multiplication of First and Second number is: %f", num1 * num2);
       printf("\nThe Division of First and Second number is: %f", num1 / num2);

       // Method 2
       float num_1, num_2;
       printf("\nEnter Fisrst Number");
       scanf("%f", &num_1);
       printf("Enter Second Number");
       scanf("%f", &num_2);

       float addition = num_1 + num_2;
       float subtraction = num_1 - num_2;
       float multiplication = num_1 * num_2;
       float division = num_1 / num_2;
       printf("\nThe Addition of %f"
              " and %f"
              " is %f",
              num_1, num_2, addition);

       printf("\nThe Subtraction of %f"
              " and %f"
              " is %f",
              num_1, num_2, subtraction);

       printf("\nThe Multiplication of %f"
              " and %f"
              " is %f",
              num_1, num_2, multiplication);

       printf("\nThe Division of %f"
              " and %f"
              " is %f",
              num_1, num_2, division);
       return 0;
}