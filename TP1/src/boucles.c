#include <stdio.h>

int main() {
    int compteur = 5; 

    if (compteur >= 10) {
        printf("La valeur de compteur doit être strictement inferieure a 10.\n");
        return 1;
    }

    printf("Triangle avec boucle for :\n");

    for (int i = 1; i <= compteur; i++) {          
        for (int j = 1; j <= i; j++) {             
            if (i == 3 && j > 1)                   
                printf("# ");
            else if (i == 4 && j > 1)              
                printf("# ");
            else
                printf("* ");
        }
        printf("\n");
    }

    return 0;
}
