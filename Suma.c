/*Ejercicio 1. Escribir una funci�n que sume dos n�meros. Implemente un programa
que la utilice. */

#include <stdio.h>

int suma (num,num1) {
	return (num + num1);
}

int main () {
	int num, num1, result;
	printf("Introduzca dos numeros: ");
	scanf("%i", &num);
	scanf("%i", &num1);
	
	result = suma(num,num1);
	
	printf ("El resultado de la suma es: %i", result);
	
}
