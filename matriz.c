#include<stdio.h>
#include<stdlib.h>

void preencherMatriz(int a, int b, int matriz[a][b]){
    for(int i=0; i<a; i++){
        for(int j=0; j<b; j++){
            matriz[i][j]=rand()%100+1;
        }
    }
}

void imprimirMatriz(int a, int b, int matriz[a][b]){
    for(int i=0; i<a; i++){
        for(int j=0; j<b; j++){
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
}

int somaDiagonal(int a, int b, int matriz[a][b]){
    int soma;
    soma=0;
    for(int i=0; i<a; i++){
            soma = soma + matriz[i][i];
    }
    printf("%d", soma);
}

int main(){
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);
    int matriz[a][b];
    preencherMatriz(a, b, matriz);
    imprimirMatriz(a, b, matriz);
    somaDiagonal(a, b, matriz);
    return 0;
}
