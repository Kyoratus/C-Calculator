#include <stdio.h>      // Includes the standard input/output library (for printf and scanf)

int main()              // Every C program starts executing from main()
{
    char op;            // Variable to store the operator (+, -, *, /)
    double num1, num2;  // Two variables to store the numbers. 'double' allows decimal values
    double result;      // Variable to store the final answer

    // Ask the user to enter the first number
    printf("Enter first number: ");
    scanf("%lf", &num1);    // Reads a double value and stores it in num1. '&' gives the address of num1

    // Ask the user to enter the operator
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &op);      // Reads one character. The space before %c skips any leftover newline from the previous input

    // Ask the user to enter the second number
    printf("Enter second number: ");
    scanf("%lf", &num2);    // Reads the second number and stores it in num2

    // 'switch' checks the value of 'op' and runs the matching block
    switch (op)
    {
        case '+':                   // If the operator is '+'
            result = num1 + num2;   // Add the two numbers
            printf("Result: %.2lf\n", result);  // Print the result up to 2 decimal places
            break;                  // Stop the switch so the other cases are not executed

        case '-':                   // If the operator is '-'
            result = num1 - num2;   // Subtract num2 from num1
            printf("Result: %.2lf\n", result);
            break;

        case '*':                   // If the operator is '*'
            result = num1 * num2;   // Multiply the two numbers
            printf("Result: %.2lf\n", result);
            break;

        case '/':                   // If the operator is '/'
            if (num2 == 0)          // Division by zero is not allowed, so we check first
            {
                printf("Error: Cannot divide by zero.\n");
            }
            else
            {
                result = num1 / num2;   // Divide num1 by num2
                printf("Result: %.2lf\n", result);
            }
            break;

        default:                    // Runs if the operator is none of the above
            printf("Error: Invalid operator.\n");
    }

    return 0;               // Tells the operating system the program ended successfully
}