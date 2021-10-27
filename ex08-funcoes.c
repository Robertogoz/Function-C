#include <stdio.h>

int alteracoes = 0, i, j;

void printMatriz(int l, int c, int matriz[l][c]) {
	for(i=0;i<l;i++) {
		for(j=0;j<c;j++) {
			printf("%d ", matriz[i][j]);
		}
		printf("\n");
	}
}

int processaMatriz(int l, int c, int x, int matriz[l][c]) {
	for(i=0;i<l;i++) {
		for(j=0;j<c;j++) {
			if(x < matriz[i][j]) {
				matriz[i][j] = 0;
				alteracoes++;
			}
		}
	}
	return alteracoes;
}

int main(void) {
	int x;
	int matriz[3][3];
	scanf("%d",&x);
	for (i=0; i<3; i++){
		for (j=0; j<3; j++){
			scanf("%d", &matriz[i][j]);
		}
	}
	alteracoes = processaMatriz(3, 3, x, matriz);
	printMatriz(3, 3, matriz);
	printf("Alteracoes=%d",alteracoes);
}
