#include <stdio.h>
int main()
{
    // printf("Hello world");
    // First Program
    int length = 4;
    int width = 6;
    int area;

    area = length * width;

    printf("The Length of a rectangle is: %i", length);
    printf("\nThe Width of a rectangle is: %i", width);
    printf("\nThe Area of a rectangle is: %i\n", area);

    // Second Program
    int studentID = 15;
    int studentAge = 23;
    float studentFee = 75.25;
    char studentGrade = 'B';

    printf("\nThe Student ID is: %i\n"
           "The Student Age is: %i\n"
           "The Student Fee is: %f\n"
           "The Student Grade is: %c\n",
           studentID, studentAge, studentFee, studentGrade);

    // Third Program
    int items = 50;
    float cost_per_item = 9.99;
    float total_cost = items * cost_per_item;
    char currency = '$';

    printf("Number of Items are: %i\n", items);
    printf("Cost per Item is: %c%f\n", currency, cost_per_item);
    printf("Total Cost is: %c%f", currency, total_cost);

    return 0;
}