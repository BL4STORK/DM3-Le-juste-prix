#include <stdio.h>
#include <stdlib.h>
#include "time.h"

int main() {
int rand ();
    srand(time(NULL));
    int randomNumber = (rand() % 1000) + 1;
    int number;

    while (randomNumber){
        printf("Choissisez un nombre entre 1 et 1000: \n");
        scanf("%d", &number);

        if( number < randomNumber){
            printf("C'est plus\n");
        }if(number > randomNumber){
            printf("C'est moins\n");
        }if(number == randomNumber){
            printf("Bravo, vous avez trouve le juste prix!\n");
            return 0;
        }
    }

    return 0;
}
