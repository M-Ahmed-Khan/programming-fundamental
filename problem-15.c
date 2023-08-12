#include <stdio.h>

int main()
{
    int firstNum, secondNum;

    printf("------SWAP VALUES------\n");
    printf("Enter your Values\n");

    printf("First number = ");
    scanf("%d", &firstNum);

    printf("Second number = ");
    scanf("%d", &secondNum);

    int temp = firstNum;
    firstNum = secondNum;
    secondNum = temp;

    printf("After swapping the values:\n");

    printf("First number = %d\n", firstNum);
    printf("Second number = %d\n", secondNum);

    return 0;
}