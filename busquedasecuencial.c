#include <stdio.h>

int buscar, indice, encontrado;
int arreglo[15] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};

int main(){
	printf("Ingresa un numero: ");
	scanf("%d",&buscar);
	encontrado = 0;
	for (int i=0;i<=14;i++){ 
		if (buscar==arreglo[i]){
			encontrado = 1;
			indice = i+1;
			}
		}
	if(encontrado==1){
		printf("\nSe encontro el numero en la posicion: %d\n",indice);
		}else{
			printf("\nNo se encontro el numero");
			}		
	return 0;
}
