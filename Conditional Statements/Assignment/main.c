#include <stdio.h>
int main()
{

    int num1, num2, num3;
    printf("Enter Number 1: ");
    scanf("%i", &num1);

    printf("Enter Number 2: ");
    scanf("%i", &num2);

    printf("Enter Number 3: ");
    scanf("%i", &num3);

    if (num1 > num2 && num1 > num3)
    {
        printf("%i is greater than %i and %i", num1, num2, num3);
    }
    else if (num2 > num1 && num2 > num3)
    {
        printf("%i is greater than %i and %i", num2, num1, num3);
    }
    else
    {
        printf("%i is greater than %i and %i", num3, num1, num2);
    }

    int age;

    printf("\nEnter Age: ");
    scanf("%i", &age);

    if (age >= 0 && age <= 12)
    {
        printf("Child");
    }
    else if (age >= 13 && age <= 19)
    {
        printf("Teenager");
    }
    else if (age >= 20 && age <= 59)
    {
        printf("Adult");
    }
    else if (age >= 60)
    {
        printf("Senior Citizen");
    }
    else
    {
        printf("Enter correct age");
    }

    int userAge;

    printf("\nEnter Age: ");
    scanf("%i", &userAge);

    if (userAge >= 18)
    {
        printf("Eligible to vote");
    }
    else
    {
        printf("Not elgible");
    }

    return 0;
}
