#include <stdio.h>

int main() {
    int casas_torre = 5;
    printf("Torre:\n");
    for (int i = 1; i <= casas_torre; i++) { 
        printf("Direita\n");
}

int casas_bispo = 5;
printf("\nBispo:\n");
int i = 1;
while (i <= casas_bispo) { 
    printf("Cima, Direita\n");
    i++;
}

int casas_rainha = 8;
    printf("\nRainha:\n");
    int j = 1;
    do { 
        printf("Esquerda\n");
        j++;
    } while (j <= casas_rainha);

    return 0;
}
