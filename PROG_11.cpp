/* autor: Oscar Vivaldi Partido Ramirez realizado: 21/02/2022
programa que pida 20 numeros y calcule la suma 
*/
#include <stdio.h>
int main (){
float numero, suma=0;
int i=0;
while (i<20){
	printf("Introduce un numero%d:  ", i);
	scanf("%f",&numero);
	suma=suma+numero;
	i++;
}
printf("La suma es %.2f",suma);
	
	
	return 0;
}

