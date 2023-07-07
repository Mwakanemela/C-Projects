#include <stdio.h>

int main()
{
    char operator;
    double num1;
    double num2;
    double result;
    printf("Enter operator (+ - * /): ");
    scanf("%c", &operator);

    printf("Enter num1 : ");
    scanf("%lf", &num1);

    printf("Enter num2 : ");
    scanf("%lf", &num2);

    switch (operator)
    {
    case '+':
        result = num1 + num2;
        printf("Answer = %.3lf", result);
        break;

    case '-':
        result = num1 - num2;
        printf("Answer = %.3lf", result);
        break;
        
    case '*':
        result = num1 * num2;
        printf("Answer = %.3lf", result);
        break;
        
    case '/':
        result = num1 / num2;
        printf("Answer = %.3lf", result);
        break;
        
    default:
        printf("%c is not a valid operator", operator);
        break;
    }
    
}