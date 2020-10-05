#include<stdio.h> //Permite entradas y salidas
#include<math.h>	// Permite hacer cosas matemáticas
#define PI 3.1416

int main(){	// Int espera variables de enteros
	float area, radio;	//es una variante flotante
	radio = 5;		//Valor del diario
	area = PI * pow(5,2);	//pow  es potencia (base, potencia)
	printf("Area\n");	// el \n es para salto de línea
	printf("%s%f\n\n", "Area de Circulo con radio 5:", area);	//%F para imprimir varibla flotante
	return 0; 	// al final para cuanadousamos int
	}
