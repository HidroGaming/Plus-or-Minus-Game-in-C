#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int MysteriousNumber = 0, nombreEntre = 0;
    char chaine[] = "aaaaaaa";
    printf("Hello , welcome to the Plus or Minus game !\n");
    system("pause");
    printf("Choose your difficulty :\n");
    printf("Easy : number = 1 to 100\n");
    printf("Normal : number = 1 to 200\n");
    printf("Hard : number = 1 to 500\n");
    printf("Expert : number = 1 to 1000\n");
    scanf("%s", chaine);
    if (chaine == "Easy") {
        do{
            int MIN = 1, MAX = 100;
            srand(time(NULL));
            MysteriousNumber = (rand() % (MAX - MIN + 1)) + MIN;
            printf("What's the number ?");
            scanf("%d", &nombreEntre);


            if (nombreEntre < MysteriousNumber)
            {
                printf("It's bigger !\n");
            }
            else if (nombreEntre > MysteriousNumber)
            {
                printf("It's smaller !\n");
            }
            else
            {
            printf("Well done, that's it !\n");
            }

        }while(nombreEntre != MysteriousNumber);
    }
    else if (chaine == "Normal") {
        do{
            int MIN = 1, MAX = 200;
            srand(time(NULL));
            MysteriousNumber = (rand() % (MAX - MIN + 1)) + MIN;
            printf("What's the number ?");
            scanf("%d", &nombreEntre);


            if (nombreEntre < MysteriousNumber)
            {
                printf("It's bigger !\n");
            }
            else if (nombreEntre > MysteriousNumber)
            {
                printf("It's smaller !\n");
            }
            else
            {
            printf("Well done, that's it !\n");
            }

        }while(nombreEntre != MysteriousNumber);
    }
    else if (chaine == "Hard") {
        do{
            int MIN = 1, MAX = 500;
            srand(time(NULL));
            MysteriousNumber = (rand() % (MAX - MIN + 1)) + MIN;
            printf("What's the number ?");
            scanf("%d", &nombreEntre);


            if (nombreEntre < MysteriousNumber)
            {
                printf("It's bigger !\n");
            }
            else if (nombreEntre > MysteriousNumber)
            {
                printf("It's smaller !\n");
            }
            else
            {
            printf("Well done, that's it !\n");
            }

        }while(nombreEntre != MysteriousNumber);
    }
    else if (chaine == "Expert") {
        do{
            int MIN = 1, MAX = 100;
            srand(time(NULL));
            MysteriousNumber = (rand() % (MAX - MIN + 1)) + MIN;
            printf("What's the number ?");
            scanf("%d", &nombreEntre);


            if (nombreEntre < MysteriousNumber)
            {
                printf("It's bigger !\n");
            }
            else if (nombreEntre > MysteriousNumber)
            {
                printf("It's smaller !\n");
            }
            else
            {
            printf("Well done, that's it !\n");
            }

        }while(nombreEntre != MysteriousNumber);
    }
    else () {
        printf("It's not a valid difficulty")
    }

    system("pause");

}
