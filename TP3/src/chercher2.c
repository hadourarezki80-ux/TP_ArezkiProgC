#include <stdio.h>

#define N 10     // Nombre de phrases
#define MAX_LEN 200  // Longueur maximale d'une phrase

// Fonction pour comparer deux chaînes de caractères
// Retourne 1 si elles sont identiques, 0 sinon
int comparer_chaines(const char *s1, const char *s2) {
    int i = 0;
    while (s1[i] != '\0' && s2[i] != '\0') {
        if (s1[i] != s2[i]) {
            return 0; // Différence trouvée
        }
        i++;
    }
    // Vérifie si les deux chaînes se terminent en même temps
    if (s1[i] == '\0' && s2[i] == '\0') {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    // Tableau de 10 phrases
    char phrases[N][MAX_LEN] = {
        "Bonjour, comment ça va ?",
        "Le temps est magnifique aujourd'hui.",
        "C'est une belle journée.",
        "La programmation en C est amusante.",
        "Les tableaux en C sont puissants.",
        "Les pointeurs en C peuvent être déroutants.",
        "Il fait beau dehors.",
        "La recherche dans un tableau est interessante.",
        "Les structures de données sont importantes.",
        "Programmer en C, c'est génial."
    };

    char phrase_recherchee[MAX_LEN];

    // Demander la phrase à rechercher
    printf("Entrez la phrase à rechercher :\n");
    fgets(phrase_recherchee, MAX_LEN, stdin);

    // Supprimer le saut de ligne éventuellement présent à la fin
    int i = 0;
    while (phrase_recherchee[i] != '\0') {
        if (phrase_recherchee[i] == '\n') {
            phrase_recherchee[i] = '\0';
            break;
        }
        i++;
    }

    // Recherche de la phrase
    int trouve = 0;
    for (i = 0; i < N; i++) {
        if (comparer_chaines(phrases[i], phrase_recherchee)) {
            trouve = 1;
            break;
        }
    }

    // Affichage du résultat
    if (trouve) {
        printf("Phrase trouvée.\n");
    } else {
        printf("Phrase non trouvée.\n");
    }

    return 0;
}

