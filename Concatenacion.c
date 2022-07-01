/*Escribir un programa que reciba una serie de cadenas de caracteres
como argumentos. El programa deberá concatenarlas y dar la vuelta a la cadena
resultante. La cadena que almacene la concatenación de los argumentos debe
utilizar la memoria justa y necesaria.*/

#include <stdio.h>
void concatenar ();
int main() {
	char cadena1[18], cadena2[18], Cadena[36];
	printf("intruduzca una cadena (max 18 caracteres): ");
	scanf("%s", cadena1);
	printf("intruduzca una cadena (max 18 caracteres): ");
	scanf("%s", cadena2);
	concatenar(cadena1, cadena2, Cadena);
	printf ("Cadena concatenada: %s", Cadena);
	return 0;
}

void concatenar (char term[], char term2[], char Cadena[]) {
	int i=0, j=0;

	while (term2[i]!='\0') {
		Cadena[i]=term2[i];
		i++;
	} 
	Cadena[i] = ' ';
	i++;
	while (term[j]!= '\0') {
		Cadena[i+j]=term[j];
		j++;
	}
	
	
}
