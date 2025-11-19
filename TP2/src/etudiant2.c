#include <stdio.h>
#include <string.h>   // nécessaire pour strcpy

// Définition de la structure pour un étudiant
struct Etudiant {
    char nom[30];
    char prenom[30];
    char adresse[100];
    float note1;      // Programmation en C
    float note2;      // Système d'exploitation
};

int main() {
    struct Etudiant etudiants[5];

    // === Saisie des informations ===
    for (int i = 0; i < 5; i++) {
        printf("\n=== Étudiant.e %d ===\n", i + 1);

        printf("Nom : ");
        scanf("%29s", etudiants[i].nom);

        printf("Prénom : ");
        scanf("%29s", etudiants[i].prenom);

        printf("Adresse : ");
        scanf(" %99[^\n]", etudiants[i].adresse);  // lit une ligne complète

        printf("Note 1 (Prog C) : ");
        scanf("%f", &etudiants[i].note1);

        printf("Note 2 (Système d'exploitation) : ");
        scanf("%f", &etudiants[i].note2);
    }

    // === Affichage des informations ===
    printf("\n\n===== Informations des étudiant.es =====\n\n");

    for (int i = 0; i < 5; i++) {
        printf("Étudiant.e %d :\n", i + 1);
        printf("  Nom       : %s\n", etudiants[i].nom);
        printf("  Prénom    : %s\n", etudiants[i].prenom);
        printf("  Adresse   : %s\n", etudiants[i].adresse);
        printf("  Note 1    : %.2f\n", etudiants[i].note1);
        printf("  Note 2    : %.2f\n", etudiants[i].note2);
        printf("\n");
    }

    return 0;
}
