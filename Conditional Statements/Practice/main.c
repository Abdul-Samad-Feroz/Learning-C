#include <stdio.h>
int main()
{
    int num;
    printf("Enter a Number: ");
    scanf("%i", &num);

    if (num > 10)
    {
        printf("Greater than 10");
    }

    int age;
    printf("\nEnter your age: ");
    scanf("%i", &age);

    if (age >= 18)
    {
        printf("Eligible to vote");
    }

    float number;
    printf("\nEnter a Number: ");
    scanf("%f", &number);

    if (number > 0)
    {
        printf("Number is Positive");
    }
    else
    {
        printf("Number is Negative");
    }

    float user_marks;
    printf("\nEnter your Marks: ");
    scanf("%f", &user_marks);

    if (user_marks >= 50)
    {
        printf("Pass");
    }
    else
    {
        printf("Fail");
    }

    float marks;
    printf("\nEnter your Marks: ");
    scanf("%f", &marks);

    if (marks >= 90 && marks <= 100)
    {
        printf("A Grade");
    }
    else if (marks >= 80 && marks <= 89)
    {
        printf("B Grade");
    }
    else if (marks >= 70 && marks <= 79)
    {
        printf("C Grade");
    }
    else if (marks >= 60 && marks <= 69)
    {
        printf("D Grade");
    }
    else if (marks < 60)
    {
        printf("Fail");
    }
    else
    {
        printf("Enter Valid Marks");
    }

    // Nested If Else

    int x = 15;
    int y = 25;

    if (x > 10)
    {
        printf("Parent class is true\n");
        if (y < 20)
        {
            printf("Child class is true\n");
        }
        else if (y == 25)
        {
            printf("Child else is true");
        }
        else
        {
            printf("Child class is false");
        }
    }

    // Ternary Operator

    int z = 10;

    (z >= 10) ? printf("\nZ is greater or equals to 10") : printf("\nZ is smaller than 10");

    return 0;
}