#include <stdio.h>

int main() {
    int d = 0x0FF0FFFF;   

    int bit4gauche, bit20gauche;
    int taille = sizeof(int) * 8;  

    bit4gauche = (d >> (taille - 4)) & 1;
    bit20gauche = (d >> (taille - 20)) & 1;

    if (bit4gauche == 1 && bit20gauche == 1)
        printf("1\n");
    else
        printf("0\n");

    return 0;
}
