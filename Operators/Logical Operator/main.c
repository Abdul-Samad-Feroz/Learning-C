#include <stdio.h>
int main()
{

    float num1 = 29;
    float num2 = 35;

    if ((num1 > 0 && num2 > 0) && !(num1 == num2))
    {
        printf("Both numbers are Positive and not equal");
    }
    else if (num1 == 0 || num2 == 0)
    {
        printf("Zero Found");
    }
    else
    {
        printf("Conditions not met");
    }

    return 0;
}