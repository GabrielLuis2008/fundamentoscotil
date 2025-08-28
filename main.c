#include <stdio.h>

int main(){
    int vetor[10];
    int maiorvalor, i;

    printf("digite 10 valores:\n");
    for(i = 0; i < 10; i++){
        printf("Valor %d: " , i + 1);
        scanf("%d" , &vetor[i]);
    }
    maiorvalor = veotr[0];

    for(i = 0; i < 10; i++) {
        if (veotr[i] > maiorvalor){
            maiorvalor = vetor[i];
        }
    }

printf("O maior valor digitado foi: %d\n" , maiorvalor);

return 0;
}