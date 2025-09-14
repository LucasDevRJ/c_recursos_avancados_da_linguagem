#include <stdio.h>

int calculaFibonacci(int n) {
	if (n == 0) return 0;   // caso base
    if (n == 1) return 1;   // caso base
	return calculaFibonacci(n-1) + calculaFibonacci(n-2);
}

int main() {
	printf("%d\n", calculaFibonacci(5));
}