//CASINO MADE BY SUBHADIP DAS.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void age();
void num();

int main()
{
    int a, number;

    printf("\n\n**************************\n");
    printf("Welcome to the CASINO---made by SUBHADIP DAS\n");
    age(a);
    printf("\n\n**************************");
    printf("\nIf the number generated by the system will be divisible by 3 or equal to 100, you will win:)\nIf the number generated by the system will not be divisible by 3, you will lose:( \n");

    int key;
    printf("\nPress '0' for close the game here...\nPress '1' to continue...\n");
    do
    {
        printf("\nEnter any key between 0 and 1: ");
        scanf("%d", &key);
        switch (key)
        {
        case 0:
            printf("You have pressed '0'...\n");
            printf("You don't want to continue the game\n\n");
            printf("Thanks for coming to my CASINO :)\n");
            printf("\nPress 'Run' / 'c and tab' to play again >>>\n");
            printf("\n----CASINO MADE BY SUBHADIP DAS----\n\n");
            exit(0);
        case 1:
            printf("You have pressed '1'...\n");
            printf("Thanks for continuing the game :)\n");
            break;
        default:
            printf("\nYou have pressed a wrong key!!!!\n");
        }
    } while (key > 1);

    printf("\nThe casino is generating a random number between 0 to 100--->>>   ");
    num(number);
    printf("\nPress 'Run' / 'c and tab' to play again >>>\n");
    printf("\n----CASINO MADE BY SUBHADIP DAS----\n\n");
    return 0;
}

void age()
{
    int a;
    printf("Your age: ");
    scanf("%d", &a);
    printf("Your age is %d\n", a);
    if (a < 18)
    {
        printf("\nSorry!!! You are not eligible to play this CASINO :(\n");
        printf("You can play it when your age will be 18 or more.\n\n");
        exit(0);
    }
    else
    {
        printf("\nYou are eligible to play this CASINO :)\n");
    }
}
void num()
{
    int number;
    srand(time(0));
    number = rand() % 100 + 1;
    printf("%d\n", number);
    if (number % 3 == 0)
    {
        printf("\nA number has been generated which is divisible by 3!\n");
        printf("Hurray! You WON!!! :)\n");
    }
    if (number== 100)
    {
        printf("\nA number has been generated which is divisible by 3!\n");
        printf("Hurray! You WON!!! :)\n");
    }
    if (number % 3 != 0)
    {
        printf("\nA number has been generated which is not divisible by 3\n");
        printf("Ah! You LOST!!! :(\n");
        printf("Better luck next time\n");
    }
}