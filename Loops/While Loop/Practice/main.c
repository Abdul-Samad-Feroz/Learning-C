#include <stdio.h>
int main()
{
    int countdown = 3;
    while (countdown > 0)
    {
        printf("%d\n", countdown);
        countdown--;
    }
    printf("Happy Birthday!!\n");

    int num;
    int count = 1;

    printf("\nEnter a Number: ");
    scanf("%i", &num);
    while (count <= 10)
    {
        printf("\n%i X %i = %i", num, count, num * count);
        count++;
    }

    return 0;
}
