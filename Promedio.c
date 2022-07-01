/*Escribir un programa que reciba como argumento un conjunto de
números. Calcular la media mediante una función. */

#include <stdio.h>

int promedio();

int main() {
	int num, i, prom;
	printf("Introduzca la cantidad de numeros a promediar: ");
	scanf("%d", &num);
	int array[num];
	
	for (i=0; i<num; i++) {
		printf("Introduzca el valor del numero %d: ", i+1);
		scanf("%d", &array[i]);
	}
	
	prom=promedio(array, num);
	printf("El promedio de los numeros es: %i", prom);
	
	return 0;
}

int promedio(int nums[], int n) {
	int i, suma=0;
	for (i=0; i<n; i++)
	suma+=nums[i];
	return suma/n;
}
