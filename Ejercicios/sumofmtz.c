#include<stdio.h>
#include<stdlib.h>

void darDimension(int *, int *);
int ** crearMatrizD(int, int);
void solicitarDatos(int **, int, int);
void mostrarDatos(int **, int, int);
void liberar(int**, int);

void main(){

int **mtz1 **mtz2,**c, fil, col;
darDimension(&fil, &col);

mtz = crearMatrizD(fil,col);
solicitarDatos(mtz, fil, col);
mostrarDatos(mtz, fil, col);
liberar(mtz, fil);
}

void darDimension(int *fil, int *col){
printf("Introduzca las filas \n");
scanf("%d", fil);
printf("Introduzca las columnas \n");
scanf("%d", col);
}

int ** crearMatrizD(int fil, int col){
int **mtz;
int i;
mtz=(int**)malloc(sizeof(int*)*fil);
if(mtz == NULL){
printf("No hay memoria disponible... \n");
exit(0);}
	for(i=0;i<fil;i++){
mtz[i]=(int*)malloc(sizeof(int)*col);
if(mtz[i]==NULL){
printf("No hay memoria disponible... \n");
exit(0);}
}
return mtz;

}

void solicitarDatos(int **mtz, int fil, int col){
int i,j;
printf("Introduzca los elementos \n");
	for(i=0; i<fil; i++){
		for(j=0; j<col; j++){
			printf("mtz[%d][%d],  \n",i+1,j+1);
			scanf("%d", &mtz[i][j]);
}
}
}

void mostrarDatos(int **mtz, int fil, int col){
int i,j;
    for(i=0; i<fil; i++){
    for(j=0; j<col; j++)
    printf("mtz[%d][%d]=%d \n",i+1,j+1, mtz[i][j]);
}
}

void liberar(int **mtz, int fil){
int i;
for(i=0;i<fil;i++)
free(mtz[i]);
free(mtz);
}
