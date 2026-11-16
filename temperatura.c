#include <stdio.h>

int main(void) {
	int temperatura = 25;
	float F = (temperatura * 9 / 5) + 32;
	printf("Temperatura: %d graus\n", temperatura);
	printf("Fahrenheit: %.1f graus\n", F);
	if (temperatura >= 20) {
		printf("Temperatura alta");
	}
	else if (temperatura <20) {
		printf("Temperatura baixa");
	}
	return 0;
}
