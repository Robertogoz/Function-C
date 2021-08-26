#include <stdio.h>

double notas[10];
int i, j;

double le_notas(){

    for(i=0;i<10;i++){
        printf("nota do aluno %d:\n",i);
        scanf(" %lf", &notas[i]);
    }
    return notas[i];  
}

double media_notas(){
    double media, todas_notas = 0;

    le_notas();

    for(j=0;j<10;j++){
        todas_notas += notas[j];
    }
    media = todas_notas / j;

    return media;
}

int main(void){
    
    printf("%.2lf", media_notas());
}
