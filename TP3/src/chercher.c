#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAILLE 100

int main() {
    int tab[TAILLE];
    int i, chercher;
    int trouve = 0;  // 0 = non trouvé, 1 = trouvé

    // Initialisation du générateur de nombres aléatoires
    srand(time(NULL));

    // Remplissage du tableau avec des valeurs aléatoires (-50 à 50)
    for (i = 0; i < TAILLE; i++) {
        tab[i] = (rand() % 101) - 50;  // valeurs entre -50 et 50
    }

    // Affichage du tableau
    printf("Tableau :\n");
    for (i = 0; i < TAILLE; i++) {
        printf("%d ", tab[i]);
    }
    printf("\n\n");

    // Demander à l'utilisateur l'entier à chercher
    printf("Entrez l'entier que vous souhaitez chercher : ");
    scanf("%d", &chercher);

    // Recherche dans le tableau
    for (i = 0; i < TAILLE; i++) {
        if (tab[i] == chercher) {
            trouve = 1;
            break;
        }
    }

    // Affichage du résultat
    if (trouve)
        printf("Résultat : entier présent\n");
    else
        printf("Résultat : entier absent\n");

    return 0;
}
