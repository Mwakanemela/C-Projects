#include <stdio.h>

int main()
{
    const float PI = 3.14159;
    double area;
    double circumference;
    double radius;

    printf("What is the radius of the circle \t");
    scanf("%lf", &radius);

    circumference = 2 * PI * radius;
    area = PI * radius * radius;

    printf("Circumference      :%.3lf", circumference);
    printf("\nArea of circle        :%.3lf", area);

    return 0;
}