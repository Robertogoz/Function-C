#include <stdio.h>

int comp(double a, double b) {
	if (a == b) {
		return 0;
	} else if (a > b) {
		return 1;
	} else {
		return -1;
	}
}

int main() {
	int i, n;
	double a, b;
	    
	scanf("%i", &n);
	for (i = 0; i < n; i++) {
	    scanf("%lf %lf", &a, &b);
	    printf("%i\n", comp(a, b));
	}
}
