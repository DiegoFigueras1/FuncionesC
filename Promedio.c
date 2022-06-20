#include <stdio.h>

int prom (num1,num2,num3,num4) {
	return ((num1+num2+num3+num4)/4);
}

int main () {
	
	int num1, num2, num3, num4, result;

	
	printf("Introduzca los numeros para calcular su promedio:");
	scanf("%i", &num1);
		scanf("%i", &num2);
			scanf("%i", &num3);
				scanf("%i", &num4);
	
	result = prom(num1,num2,num3,num4);
	printf("El promedio de los numeros es: %i", result);
}
