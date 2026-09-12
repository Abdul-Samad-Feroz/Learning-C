#include <stdio.h>
int main()
{

    int num1, num2;
    char operation;

    printf("Enter Number 1: ");
    scanf("%i", &num1);

    printf("Enter Number 2: ");
    scanf("%i", &num2);

    printf("Enter operation you want to perform: ");
    scanf(" %c", &operation);

    if (operation == '+')
    {
        printf("Sum of %i and %i is %i", num1, num2, num1 + num2);
    }

    else if (operation == '-')
    {
        printf("Subtraction of %i and %i is %i", num1, num2, num1 - num2);
    }

    else if (operation == '*')
    {
        printf("Multiplication of %i and %i is %i", num1, num2, num1 * num2);
    }

    else if (operation == '/')
    {
        printf("Division of %i and %i is %i", num1, num2, num1 / num2);
    }
    else
    {
        printf("Enter Valid values!");
    }

    return 0;
}