#include <stdio.h>
#include <stdlib.h>

#define TAILLE 100

// Fonction de recherche dichotomique
int recherche_dichotomique(int tab[], int taille, int valeur) {
    int gauche = 0;
    int droite = taille - 1;

    while (gauche <= droite) {
        int milieu = gauche + (droite - gauche) / 2;

        if (tab[milieu] == valeur)
            return 1;  // valeur trouvée
        else if (tab[milieu] < valeur)
            gauche = milieu + 1;
        else
            droite = milieu - 1;
    }

    return 0; // valeur non trouvée
}

int main() {
    int tab[TAILLE];
    int i, chercher;

    // Remplissage du tableau avec des entiers triés
    for (i = 0; i < TAILLE; i++) {
        tab[i] = i + 1;  // valeurs de 1 à 100
    }

    // Affichage du tableau trié
    printf("Tableau trié :\n");
    for (i = 0; i < TAILLE; i++) {
        printf("%d ", tab[i]);
    }
    printf("\n\n");

    // Demander à l'utilisateur l'entier à chercher
    printf("Entrez l'entier que vous souhaitez chercher : ");
    scanf("%d", &chercher);

    // Recherche dichotomique
    if (recherche_dichotomique(tab, TAILLE, chercher))
        printf("Résultat : entier présent\n");
    else
        printf("Résultat : entier absent\n");

    return 0;
}
