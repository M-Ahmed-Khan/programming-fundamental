#include <stdio.h>
#include <stdbool.h>

// Basic calculator program that performs addition, subtraction, multiplication and division

int getAddition(int firstNum, int secondNum);
int getSubtraction(int firstNum, int secondNum);
int getMultiplication(int firstNum, int secondNum);
int getDivision(int firstNum, int secondNum);

int main()
{
    int firstNum, secondNum;
    printf("---------CALCULATOR---------\n");

    printf("\n1. Addition");
    printf("\n2. Subtraction");
    printf("\n3. Multiplication");
    printf("\n4. Division\n");

    printf("\nFirst number = ");
    scanf("%d", &firstNum);

    printf("Second Number = ");
    scanf("%d", &secondNum);

    enum Operator {
        addition = 1,
        subtraction,
        multiplication,
        division
    };

    int userChoice;
    while (true)
    {
        printf("\n\nEnter your choice: ");
        scanf("%d", &userChoice);

        if (userChoice == addition)
        {
            printf("\nThe addition of %d and %d is %d", firstNum, secondNum, getAddition(firstNum, secondNum));
            break;
        }

        else if (userChoice == subtraction)
        {
            printf("\nThe subtraction of %d and %d is %d", firstNum, secondNum, getSubtraction(firstNum, secondNum));
            break;
        }

        else if (userChoice == multiplication)
        {
            printf("\nThe multiplication of %d and %d is %d", firstNum, secondNum, getMultiplication(firstNum, secondNum));
            break;
        }

        else if (userChoice == division)
        {
            printf("\nThe division of %d and %d is %d", firstNum, secondNum, getDivision(firstNum, secondNum));
            break;
        }

        else
        {
            printf("\nInvalid Choice");
        }
    }

    return 0;
}

int getAddition(int firstNum, int secondNum)
{
    return firstNum + secondNum;
}

int getSubtraction(int firstNum, int secondNum)
{
    return firstNum - secondNum;
}

int getMultiplication(int firstNum, int secondNum)
{
    return firstNum * secondNum;
}

int getDivision(int firstNum, int secondNum)
{
    return firstNum / secondNum;
}