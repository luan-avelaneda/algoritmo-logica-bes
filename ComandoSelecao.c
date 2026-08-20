#include <stdio.h>



//

void main() {
    int voto;


    printf("Digite o número do candidato: ");
    scanf("%d", &voto);

    switch (voto) {
        case 1:
            printf("Você votou na Ana\n");
            break;
        case 2:
            printf("Você votou no Bob\n");
            break;
        case 3:
            printf("Você votou no Candidato Teste\n");
            break;
    default:
        printf("Voto nulo\n");
        break;
    }
    printf("FIM DA VOTAÇÃO\n");
}