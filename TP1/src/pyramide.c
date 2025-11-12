#include <stdio.h>

int main() {
    int n = 10; 
    int i, j;

    printf("Pyramide de hauteur %d :\n\n", n);

    
    for (i = 1; i <= n; i++) {

        
        for (j = i; j < n; j++) {
            printf(" ");
        }

        
        for (j = 1; j <= i; j++) {
            printf("%d", j);
        }

        
        for (j = i - 1; j >= 1; j--) {
            printf("%d", j);
        }

        
        printf("\n");
    }

    printf("\nGeneration de la pyramide terminee.\n");

    return 0;
}

