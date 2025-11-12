#include <stdio.h>

int main() {
    int num1, num2;
    char op;

    // Saisie des valeurs
    printf("Entrez le premier entier : ");
    scanf("%d", &num1);

    printf("Entrez le deuxieme entier : ");
    scanf("%d", &num2);

    printf("Entrez l'operateur (+, -, *, /, %%, &, |, ~) : ");
    scanf(" %c", &op);  // espace avant %c pour ignorer les caractères de retour à la ligne

    switch (op) {
        case '+':
            printf("Resultat : %d + %d = %d\n", num1, num2, num1 + num2);
            break;

        case '-':
            printf("Resultat : %d - %d = %d\n", num1, num2, num1 - num2);
            break;

        case '*':
            printf("Resultat : %d * %d = %d\n", num1, num2, num1 * num2);
            break;

        case '/':
            if (num2 != 0)
                printf("Resultat : %d / %d = %d\n", num1, num2, num1 / num2);
            else
                printf("Erreur : division par zero impossible.\n");
            break;

        case '%':
            if (num2 != 0)
                printf("Resultat : %d %% %d = %d\n", num1, num2, num1 % num2);
            else
                printf("Erreur : modulo par zero impossible.\n");
            break;

        case '&':
            printf("Resultat : %d & %d = %d\n", num1, num2, num1 & num2);
            break;

        case '|':
            printf("Resultat : %d | %d = %d\n", num1, num2, num1 | num2);
            break;

        case '~':
            printf("Resultat : ~%d = %d\n", num1, ~num1);
            printf("Resultat : ~%d = %d\n", num2, ~num2);
            break;

        default:
            printf("Operateur non reconnu.\n");
            break;
    }

    return 0;
}


