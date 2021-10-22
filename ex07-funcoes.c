#include <stdio.h>

int multiplica(int x1, int x2) {
	return x1*x2;
}

int quadrado(int x) {
	return multiplica(x,x);
}

int cubo(int x) {
	return multiplica(x,x) * x;
}

int pol_cubo(int a, int b, int c, int d, int x) {
	return (a * cubo(x)) + (b * quadrado(x)) + (c*x) + d;
}

int main() {
	int i, n;
	int  a, b, c, d, x;
	    
	scanf("%i", &n);
	for (i = 0; i < n; i++) {
	   scanf("%i %i %i %i %i", &a, &b, &c, &d, &x);
	   printf("%i %i %i %i\n", cubo(x), quadrado(x), multiplica(c,x), pol_cubo(a, b, c, d, x));
	}
}
