
#include <stdio.h>

int main(){
    char operator;
    double num1;
    double num2;
    double result;
    int something;

    printf("\nWhat type of operation do you want to do? (+ - * /)\n");
    scanf("%c", &operator);

    printf("Enter number 1: ");
    scanf("%lf", &num1);
    printf("Enter number 2: ");
    scanf("%lf", &num2);

    switch (operator)
    {
    case '+':
        result = num1 + num2;
        printf("Result: %lf.", result);
        break;
    case '-':
        result = num1 - num2;
        printf("Result: %lf.", result);
        break;
    case '*':
        result = num1 * num2;
        printf("Result: %lf.", result);
        break;
    case '/':
        result = num1 / num2;
        printf("Result: %lf.", result);
        break;
    default:
        printf("%c is a invalid operator.", operator);
        break;
    }
    
    printf("\nInput something and press enter to exit...");
    scanf("%i", &something);

    return 0;
}