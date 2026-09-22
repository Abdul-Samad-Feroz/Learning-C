#include <stdio.h>
int main()
{

    for (int i = 0; i < 5; i++)
    {
        printf("%i\n", i);
    }

    int sum = 0;

    for (int i = 1; i <= 50; i++)
    {
        sum = i + sum;
    }
    printf("%i", sum);

    return 0;
}