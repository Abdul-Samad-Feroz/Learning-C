#include <stdio.h>
int main()
{

    int num = 10;
    while (num >= 1)
    {
        printf("\n%i", num);
        num--;
    }

    int number = 0;
    while (number <= 50)
    {
        printf("\n%i", number);
        number += 2;
    }

    int userNum;
    int count = 1;

    printf("\nEnter a Number: ");
    scanf("%i", &userNum);
    while (count <= 10)
    {
        printf("\n%i X %i = %i", userNum, count, userNum * count);
        count++;
    }

    int sum = 0;
    int counter = 0;
    int user_num;

    printf("\nEnter a Number: ");
    scanf("%i", &user_num);

    while (counter <= user_num)
    {
        sum = counter + sum;
        counter += 2;
        printf("%i\n", sum);
    }
    printf("%i\n", sum);

    return 0;
}