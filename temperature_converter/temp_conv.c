#include <stdio.h>
#include <ctype.h>

int main()
{
    char unit;
    float temperature;

    printf("Is the temperature in C or F? :   ");
    scanf("%c", &unit);

    unit = toupper(unit);

    if (unit == 'C')
    {
        printf("Enter the temperature in Celsius: ");
        scanf("%f", &temperature);
        temperature = (temperature * 9 / 5) + 32;
        printf("The temperature in Farenheit is : %.1f", temperature);
    }
    else if (unit == 'F')
    {
        printf("Enter the temperature in Farenheit: ");
        scanf("%f", &temperature);
        temperature = ((temperature - 32) * 5) / 9;
        printf("The temperature in Celsius is : %.1f", temperature);
    }
    else 
    {
        printf("%c is not a valid unit of temperature measurement", unit);
    }

    return 0;

}