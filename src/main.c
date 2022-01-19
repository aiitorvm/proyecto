/*
 * main.c
 *
 *  Created on: 5 nov 2021
 *      Author: aitor
 */

/************* CALCULADORA *****************
 #include <stdio.h>
 void main() {
 int x, y, resultado, choose;

 printf( "  1. Sumar dos números \n" );
 printf( "  2. Restar dos números \n" );
 printf( "  3. Multiplicar dos números \n" );
 printf( "  4. Dividir dos números \n" );
 printf( "  5. Salir \n" );

 scanf("%d", &choose);
 switch (choose){
 case 1:
 printf( "Introduce el numero a sumar\n" );
 scanf("%d", &x);
 printf( "Introduce el numero a sumar\n" );
 scanf("%d", &y);
 resultado = x + y;
 printf("El resultado es %d\n", resultado);
 break;
 case 2:
 printf( "Introduce el numero a restar\n" );
 scanf("%d", &x);
 printf( "Introduce el numero a restar\n" );
 scanf("%d", &y);
 resultado = x - y;
 printf("El resultado es %d\n", resultado);
 break;
 case 3:
 printf( "Introduce el numero a multiplicar\n" );
 scanf("%d", &x);
 printf( "Introduce el numero a multiplicar\n" );
 scanf("%d", &y);
 resultado = x * y;
 printf("El resultado es %d\n", resultado);
 break;
 case 4:
 printf( "Introduce el numero a dividir\n" );
 scanf("%d", &x);
 printf( "Introduce el numero a dividir\n" );
 scanf("%d", &y);
 resultado = x / y;
 printf("El resultado es %d\n", resultado);
 break;
 }
 }
 **********************************************************************************/

/************* LE PONES UNOS NÚMEROS Y TE LOS ESCRIBE***************************
 #include <stdio.h>
 #define SIZE 5
 void main () {
 int args[SIZE];

 printf("Introdueix 5 valors enters\n");
 for (i=0;i<SIZE;i++){
 scanf("%d", &args[i]);
 }

 printf("Els valors introduits són\n");
 for (i=0;i<SIZE;i++){
 printf("%d", args[i]);
 }
 }
 *******************************************************/

/*************PASAR UN NÚMERO A BYTES***************************
 #include <stdio.h>
 #define CONV 1073741824
 void main() {
 long num, bytes;
 do{
 printf("Introdueix el valor que vulguis convertir:");
 scanf("%ld", &num);

 }while (num<1);
 bytes = num * CONV;
 printf("Aquesta és la conversió %ld bytes", bytes);
 }
 *******************************************************/

/*************OBTENER EL PRECIO GRACIAS AL DESCUENTO***************************
 #include <stdio.h>
 void main() {
 float preu, descompte, valordescompte;
 printf("Intrdueix el preu del producte:\n");
 scanf("%f", &preu);
 printf("Introdueix el descompte:\n");
 scanf("%f", &descompte);
 valordescompte=preu*descompte/100;
 printf("El preu final del producte és: %.2f", preu-valordescompte);         //.2f es para los decimales//
 }
 *******************************************************************************/

/*************ESTRELLA***************************
 #include <stdio.h>
 void main() {
 int x, y, z, d, num;
 printf("Introduce el numero de lineas ");
 scanf("%d", &d);
 for (x = 0; x < d; x++) {
 for (y = 0; y < (d - x); y++) {
 printf(" ");
 }
 for (z = 0; z < 1 + 2 * x; z++) {
 printf("*");
 }
 if (z == 1) {
 for (num = 0; num <= x; num++) {
 printf(" ");
 }
 }
 printf("\n");
 }
 }
 *******************************************************************************/

/*************PRUEBA EXAM**************
 #include <stdio.h>
 void main() {
 float preu, descompte, valordescompte, cliente, preufinal, nivel;
 printf("Introdueix el preu del producte:\n");
 scanf("%f", &preu);
 printf("Introdueix el nivel del cliente:\n");
 scanf("%f", &nivel);
 if (preu > 300) {
 valordescompte=preu*20/100;
 }
 else if (preu >= 2000) {
 valordescompte=preu*25/100;
 }
 else if (preu >= 10000) {
 valordescompte=preu*40/100;
 printf("El preu final del producte és: %.2f", preu-valordescompte);
 }
 else if (nivel = 1) {
 valordescompte=preufinal*5/100;
 }
 printf("El preu final del producte és: %.2f");
 }
 *******************************************************************************/

/*************EJER 7**************
 #include <stdio.h>
 void main() {
 int num1, num2;
 do {
 printf("Introduce un número: \n");
 scanf("%d", &num1);
 } while (num1 < 1);

 do {
 printf("Introduce un número: \n");
 scanf("%d", &num2);
 } while (num2 < 1);
 if(num1>num2)
 {
 for(num2;num2<num1;num2++)
 {

 }
 }
 }
 else
 {
 for(num1;num1<num2;num1++)

 ********************************/

/*************INTENTO DE NUM TAROT**************
 #include <stdio.h>
 void main() {
 int d, m, a, numtarot;
 printf("Introduce una fecha:");
 do {
 printf("El dia:");
 scanf("%d", &d);
 } while (d < 1 || d > 31);
 do {
 printf("El mes:");
 scanf("%d", &m);
 } while (m < 1 || m > 12);
 do {
 printf("El año:");
 scanf("%d", &a);
 } while (a < 0 || a > 9000);
 numtarot = d + m + a;
 printf("Tu número tarot seria este: %d\n", numtarot);
 }
 ********************************/

#include <stdio.h>
void main() {
	int choose, num, count = 0, tocado = 0;
	char letra;
	printf("\n**********************");
	printf("HUNDIR LA FLOTA");
	printf("**********************\n");
	printf("******* MENÚ **********\n");
	printf("1.- Nivel fácil\n");
	printf("2.- Nivel medio\n");
	printf("3.- Nivel difícil\n");
	printf("0.- Salir\n");
// TITULO Y MENU
	do {
		printf("Hola! Escoge un nivel: ");
		scanf("%d", &choose);
	} while (choose >= 4);
// VALIDAR NUMEROS DEL MENU
	switch (choose) {
	case 0:
		printf("Has decidido salir del juego :(");
		break;
// EL 0 TE HACE SALIR
	case 1:
		printf("Has escogido el nivel fácil\n");
		printf("   A  B  C  D  E  F  G  H  I  J  \n");
		printf("1  [] [] [] [] [] [] [] [] [] []  \n");
		printf("2  [] [] [] [] [] [] [] [] [] []  \n");
		printf("3  [] [] [] [] [] [] [] [] [] []  \n");
		printf("4  [] [] [] [] [] [] [] [] [] []  \n");
		printf("5  [] [] [] [] [] [] [] [] [] []  \n");
		printf("6  [] [] [] [] [] [] [] [] [] []  \n");
		printf("7  [] [] [] [] [] [] [] [] [] []  \n");
		printf("8  [] [] [] [] [] [] [] [] [] []  \n");
		printf("9  [] [] [] [] [] [] [] [] [] []  \n");
		printf("10 [] [] [] [] [] [] [] [] [] []  \n");
		do {
			do {
				printf("Escoge un numero: ");
				scanf("%d", &num);
			} while (num < 1 || num > 10);
// QUE EL NUMERO SEA ENTRE 1 Y 10
			printf("Escoge una letra: ");
			scanf("%s", &letra);
			if (num == 4 && (letra == 'e' || letra == 'E')) {
				printf("Ey, has tocado un barco\n");
				printf("   A  B  C  D  E  F  G  H  I  J  \n");
				printf("1  [] [] [] [] [] [] [] [] [] []  \n");
				printf("2  [] [] [] [] [] [] [] [] [] []  \n");
				printf("3  [] [] [] [] [] [] [] [] [] []  \n");
				printf("4  [] [] [] [] X  [] [] [] [] []  \n");
				printf("5  [] [] [] [] [] [] [] [] [] []  \n");
				printf("6  [] [] [] [] [] [] [] [] [] []  \n");
				printf("7  [] [] [] [] [] [] [] [] [] []  \n");
				printf("8  [] [] [] [] [] [] [] [] [] []  \n");
				printf("9  [] [] [] [] [] [] [] [] [] []  \n");
				printf("10 [] [] [] [] [] [] [] [] [] []  \n");
				tocado++;
// HAS TOCADO UN BARCO
			} else if (num == 5 && (letra == 'e' || letra == 'E')) {
				printf("Ey, has tocado un barco\n");
				printf("   A  B  C  D  E  F  G  H  I  J  \n");
				printf("1  [] [] [] [] [] [] [] [] [] []  \n");
				printf("2  [] [] [] [] [] [] [] [] [] []  \n");
				printf("3  [] [] [] [] [] [] [] [] [] []  \n");
				printf("4  [] [] [] [] [] [] [] [] [] []  \n");
				printf("5  [] [] [] [] X  [] [] [] [] []  \n");
				printf("6  [] [] [] [] [] [] [] [] [] []  \n");
				printf("7  [] [] [] [] [] [] [] [] [] []  \n");
				printf("8  [] [] [] [] [] [] [] [] [] []  \n");
				printf("9  [] [] [] [] [] [] [] [] [] []  \n");
				printf("10 [] [] [] [] [] [] [] [] [] []  \n");
				tocado++;
// HAS TOCADO UN BARCO
			} else if (num == 6 && (letra == 'e' || letra == 'E')) {
				printf("Ey, has tocado un barco\n");
				printf("   A  B  C  D  E  F  G  H  I  J  \n");
				printf("1  [] [] [] [] [] [] [] [] [] []  \n");
				printf("2  [] [] [] [] [] [] [] [] [] []  \n");
				printf("3  [] [] [] [] [] [] [] [] [] []  \n");
				printf("4  [] [] [] [] [] [] [] [] [] []  \n");
				printf("5  [] [] [] [] [] [] [] [] [] []  \n");
				printf("6  [] [] [] [] X  [] [] [] [] []  \n");
				printf("7  [] [] [] [] [] [] [] [] [] []  \n");
				printf("8  [] [] [] [] [] [] [] [] [] []  \n");
				printf("9  [] [] [] [] [] [] [] [] [] []  \n");
				printf("10 [] [] [] [] [] [] [] [] [] []  \n");
				tocado++;
// HAS TOCADO UN BARCO
			} else {
				printf("Nada, agua\n");
				printf("   A  B  C  D  E  F  G  H  I  J  \n");
				printf("1  [] [] [] [] [] [] [] [] [] []  \n");
				printf("2  [] [] [] [] [] [] [] [] [] []  \n");
				printf("3  [] [] [] [] [] [] [] [] [] []  \n");
				printf("4  [] [] [] [] [] [] [] [] [] []  \n");
				printf("5  [] [] [] [] [] [] [] [] [] []  \n");
				printf("6  [] [] [] [] [] [] [] [] [] []  \n");
				printf("7  [] [] [] [] [] [] [] [] [] []  \n");
				printf("8  [] [] [] [] [] [] [] [] [] []  \n");
				printf("9  [] [] [] [] [] [] [] [] [] []  \n");
				printf("10 [] [] [] [] [] [] [] [] [] []  \n");
			}
			count++;
// NO HAS TOCADO NADA
			if (tocado == 3) {
				printf("\nTocado y hundido\n");
				printf("   A  B  C  D  E  F  G  H  I  J  \n");
				printf("1  [] [] [] [] [] [] [] [] [] []  \n");
				printf("2  [] [] [] [] [] [] [] [] [] []  \n");
				printf("3  [] [] [] [] [] [] [] [] [] []  \n");
				printf("4  [] [] [] []  X [] [] [] [] []  \n");
				printf("5  [] [] [] []  X [] [] [] [] []  \n");
				printf("6  [] [] [] []  X [] [] [] [] []  \n");
				printf("7  [] [] [] [] [] [] [] [] [] []  \n");
				printf("8  [] [] [] [] [] [] [] [] [] []  \n");
				printf("9  [] [] [] [] [] [] [] [] [] []  \n");
				printf("10 [] [] [] [] [] [] [] [] [] []  \n");
				printf("\n****ERES EL GANADOR****\n");
				break;
// HAS TOCADO LAS 3 PARTES, GANAS
			} else if (tocado == 0) {
				printf(
						"\nTienes que tocar 3 casillas más, tienes %d intentos\n",
						50 - count);
			} else if (tocado == 1) {
				printf(
						"\nTienes que tocar 2 casillas más, tienes %d intentos\n",
						50 - count);
			} else if (tocado == 2) {
				printf("\nTienes que tocar 1 casilla más, tienes %d intentos\n",
						50 - count);
			}
// INTENTOS QUE LE QUEDAN
		} while (count < 50);
		if (count >= 50) {
			printf("\n****PERDISTE****\n");
		}
		break;
// SI HACES MAS DE 50 INTENTOS PIERDES
	case 2:
		printf("Has escogido el nivel medio\n");
		printf("   A  B  C  D  E  F  G  H  I  J  \n");
		printf("1  [] [] [] [] [] [] [] [] [] []  \n");
		printf("2  [] [] [] [] [] [] [] [] [] []  \n");
		printf("3  [] [] [] [] [] [] [] [] [] []  \n");
		printf("4  [] [] [] [] [] [] [] [] [] []  \n");
		printf("5  [] [] [] [] [] [] [] [] [] []  \n");
		printf("6  [] [] [] [] [] [] [] [] [] []  \n");
		printf("7  [] [] [] [] [] [] [] [] [] []  \n");
		printf("8  [] [] [] [] [] [] [] [] [] []  \n");
		printf("9  [] [] [] [] [] [] [] [] [] []  \n");
		printf("10 [] [] [] [] [] [] [] [] [] []  \n");
		break;
	case 3:
		printf("Has escogido el nivel difícil\n");
		printf("   A  B  C  D  E  F  G  H  I  J  \n");
		printf("1  [] [] [] [] [] [] [] [] [] []  \n");
		printf("2  [] [] [] [] [] [] [] [] [] []  \n");
		printf("3  [] [] [] [] [] [] [] [] [] []  \n");
		printf("4  [] [] [] [] [] [] [] [] [] []  \n");
		printf("5  [] [] [] [] [] [] [] [] [] []  \n");
		printf("6  [] [] [] [] [] [] [] [] [] []  \n");
		printf("7  [] [] [] [] [] [] [] [] [] []  \n");
		printf("8  [] [] [] [] [] [] [] [] [] []  \n");
		printf("9  [] [] [] [] [] [] [] [] [] []  \n");
		printf("10 [] [] [] [] [] [] [] [] [] []  \n");
		break;
	}
}

