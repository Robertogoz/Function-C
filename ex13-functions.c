#include <stdio.h>

int i, j;

void funcLeMatriz(int n, int M[n][n]) {
	printf("Insert %d integers to a matrix:\n", n*n);
	for(i=0;i<n;i++) {
		for(j=0;j<n;j++) {
			scanf("%d", &M[i][j]);
		}
	}
}

void funcPrintMatriz(int n, int M[n][n]) {
	printf("\nMatrix :\n");
	for(i=0;i<n;i++) {
		for(j=0;j<n;j++) {
			printf("%d\t", M[i][j]);
		}
		printf("\n");
	}
}

int funcParImpar(int x) {
	if(x%2 == 0){
		return 0;
	} else {
		return 1;
	}
}

void funcSubstMatriz (int n, int M[n][n]) {
	for(i=0;i<n;i++) {
		for(j=0;j<n;j++) {
			M[i][j] = funcParImpar(M[i][j]);
		}
	}
}

int main(void) {
	int n;
	
	printf("Enter a matrix size: ");
	scanf("%d", &n);
	
	int M[n][n];
	
	funcLeMatriz(n, M);
	
	funcPrintMatriz(n, M);
	
	funcSubstMatriz(n, M);
	
	funcPrintMatriz(n, M);
	
}
