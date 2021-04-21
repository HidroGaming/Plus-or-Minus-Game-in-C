#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    const int MAX = 100, MIN = 1;
    int MysteriousNumber = 0, nombreEntre = 0;
    srand(time(NULL));
    MysteriousNumber = (rand() % (MAX - MIN + 1)) + MIN;
    printf("Hello , welcome to the Plus or Minus game !\n");
    system("pause");
    do{

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

    system("pause");

}
