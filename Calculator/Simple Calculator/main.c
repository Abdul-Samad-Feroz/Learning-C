#include <stdio.h>
#include <math.h>
int main()
{
    float num_1, num_2;
    printf("\nEnter Fisrst Number");
    scanf("%f", &num_1);
    printf("Enter Second Number");
    scanf("%f", &num_2);

    float addition = num_1 + num_2;
    float subtraction = num_1 - num_2;
    float multiplication = num_1 * num_2;
    float division = num_1 / num_2;
    float modulus = fmod(num_1, num_2);
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
    printf("\nThe Modulus/Remainder of %f"
           " and %f"
           " is %f",
           num_1, num_2, modulus);
    return 0;
}