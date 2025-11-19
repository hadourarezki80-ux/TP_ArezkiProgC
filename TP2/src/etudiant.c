#include <stdio.h>

int main() {
    // Déclaration des tableaux pour 5 étudiant.es
    char noms[5][30] = {
        "Dupont", "Martin", "Lambert", "Durand", "Moreau"
    };

    char prenoms[5][30] = {
        "Alice", "Jean", "Sophie", "Paul", "Emma"
    };

    char adresses[5][100] = {
        "12 Rue de Paris",
        "45 Avenue des Fleurs",
        "78 Boulevard Victor Hugo",
        "3 Place du Marché",
        "27 Rue Nationale"
    };

    float note_progC[5] = {14.5, 12.0, 16.0, 10.5, 18.0};
    float note_sys[5]   = {13.0, 15.5, 17.0, 9.5, 19.0};

    // Affichage des informations
    printf("==== Liste des étudiant.es ====\n\n");

    for (int i = 0; i < 5; i++) {
        printf("Étudiant.e %d :\n", i + 1);
        printf("  Nom       : %s\n", noms[i]);
        printf("  Prénom    : %s\n", prenoms[i]);
        printf("  Adresse   : %s\n", adresses[i]);
        printf("  Prog C    : %.2f\n", note_progC[i]);
        printf("  Système   : %.2f\n", note_sys[i]);
        printf("\n");
    }

    return 0;
}
