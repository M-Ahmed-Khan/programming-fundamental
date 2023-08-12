#include <stdio.h>
#include <stdbool.h>

int getSum(int firstNum, int secondNum);
int getDifference(int firstNum, int secondNum);
int getProduct(int firstNum, int secondNum);
int getQuotient(int firstNum, int secondNum);

int main()
{
    int firstNum, secondNum, user_choice;
    printf("---------CALCULATOR---------\n");

    printf("First number = ");
    scanf("%d", &firstNum);

    printf("Second Number = ");
    scanf("%d", &secondNum);

    printf("\n1. Addition");
    printf("\n2. Subtraction");
    printf("\n3. Multiplication");
    printf("\n4. Division");

    while (true)
    {
        printf("\n\nEnter your choice: ");
        scanf("%d", &user_choice);

        if (user_choice == 1)
        {
            printf("\nThe sum of %d and %d is %d", firstNum, secondNum, getSum(firstNum, secondNum));
            break;
        }

        else if (user_choice == 2)
        {
            printf("\nThe difference of %d and %d is %d", firstNum, secondNum, getDifference(firstNum, secondNum));
            break;
        }

        else if (user_choice == 3)
        {
            printf("\nThe Product of %d and %d is %d", firstNum, secondNum, getProduct(firstNum, secondNum));
            break;
        }

        else if (user_choice == 4)
        {
            printf("\nThe Quotient of %d and %d is %d", firstNum, secondNum, getQuotient(firstNum, secondNum));
            break;
        }

        else
        {
            printf("\nInvalid Choice");
        }
    }

    return 0;
}

int getSum(int firstNum, int secondNum)
{
    return firstNum + secondNum;
}

int getDifference(int firstNum, int secondNum)
{
    return firstNum - secondNum;
}

int getProduct(int firstNum, int secondNum)
{
    return firstNum * secondNum;
}

int getQuotient(int firstNum, int secondNum)
{
    return firstNum / secondNum;
}