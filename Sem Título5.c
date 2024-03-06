#include <stdio.h>

float calculandomedia(float nota1, float nota2) {
    return (nota1 + nota2) / 2;
}

void professor(float media) {
    if (media >= 7) {
        printf("voce e fodaaaaaaaaaaa.\n");
    } else {
        printf("perdeuuuuuuuuuu.\n");
    }
}

int main() {
    float nota1, nota2;

    printf("primeira nota: ");
    scanf("%f", &nota1);

    printf("segunda nota : ");
    scanf("%f", &nota2);
    
   

    float media = calculandomedia(nota1, nota2);
    professor(media);
    return 0;
}

