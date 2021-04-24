#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int MysteriousNumber = 0, nombreEntre = 0,coups = 0,rejouer = 0,difficulty = 2;
    int max = 0;
    const int min = 1;
    printf("  _____  _                                    _                  \n");
    printf(" |  __ \| |                                  (_)                 \n");
    printf(" | |__) | |_   _ ___    ___  _ __   _ __ ___  _ _ __  _   _ ___  \n");
    printf(" |  ___/| | | | / __|  / _ \| '__| | '_ ` _ \| | '_ \| | | / __| \n");
    printf(" | |    | | |_| \__ \ | (_) | |    | | | | | | | | | | |_| \__ \ \n");
    printf(" |_|    |_|\__,_|___/  \___/|_|    |_| |_| |_|_|_| |_|\__,_|___/ \n");
    printf("Hello , welcome to the Plus or Minus game !\n");
    system("pause");
    printf("Choose your difficulty : \n");
    printf("1 = 1 to 10, 2 = 1 to 100,3 = 1 to 1000\n");
    scanf("%d", &difficulty);

    switch(difficulty)
    {
    case 1:
        max = 10;
        break;
    case 2:
        max = 100;
        break;
    case 3:
        max = 1000;
        break;
    default:
        printf("Invalid number , i will take automatically the difficulty : 2.\n");
    }

    do
    {
        coups = 0;
        MysteriousNumber = (rand() % (max - min + 1)) + 1;
        do
        {
            printf("What's the number ?");
            scanf("%d", &nombreEntre);
            coups++;

            if (MysteriousNumber > nombreEntre) {
                printf("It's plus !\n");
            }
            else if (MysteriousNumber < nombreEntre)
            {
                printf("It's minus !\n");
            }
            else
            {
                printf("Well done , That's it ( in %d times ) !\n", coups);
            }
        } while (nombreEntre != MysteriousNumber);

        printf("Would you like to do another party (1 = yes, 0 = no) ? ");
        scanf("%d", &rejouer);


    } while (rejouer);


    system("pause");

    return 0;

}
