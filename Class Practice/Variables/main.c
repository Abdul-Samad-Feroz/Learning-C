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

    return 0;
}