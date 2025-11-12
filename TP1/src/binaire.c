#include <stdio.h>

int main() {
    
    int nombres[] = {0, 4096, 65536, 65535, 1024};
    int taille = sizeof(nombres) / sizeof(nombres[0]);

    
    for (int n = 0; n < taille; n++) {
        int num = nombres[n];
        printf("Nombre : %d\n", num);
        printf("Binaire : ");

        
        int started = 0; 

        for (int i = 31; i >= 0; i--) {
            int bit = (num >> i) & 1; 
            if (bit == 1)
                started = 1; 

            if (started)
                printf("%d", bit);
        }

        
        if (!started)
            printf("0");

        printf("\n\n");
    }

    return 0;
}
