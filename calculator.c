
#include <stdio.h>

int main(){
    //assigning values
    char operator;
    double num1;
    double num2;
    double result;
    int something;

    //receiving user input
    printf("\nWhat type of operation do you want to do? (+ - * /)\n");
    scanf("%c", &operator);

    printf("Enter number 1: ");
    scanf("%lf", &num1);
    printf("Enter number 2: ");
    scanf("%lf", &num2);
    
    //calculating the result (also switch for detecting operators), and printing it out
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
    
    //getting user input so the program doesnt automatically print things out and then close
    printf("\nInput something and press enter to exit...");
    scanf("%i", &something);

    return 0;
}
