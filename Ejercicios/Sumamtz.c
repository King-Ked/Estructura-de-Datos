#include<stdio.h>
#include<stdlib.h>

void darDimension(int *, int *);
int ** crearMatrizD(int, int);
void solicitarDatos(int **, int, int);
void mostrarDatos(int **, int, int);
void sumamtz(int **, int **, int **, int, int);
void liberar(int **, int **, int **, int);

void main(){

int **mtz1, **mtz2, **mtzR, fil, col;
darDimension(&fil, &col);
mtz1 = crearMatrizD(fil,col);
mtz2 = crearMatrizD(fil,col);
mtzR = crearMatrizD(fil,col);

printf("Introduzca los datos de la primera matriz \n");
solicitarDatos(mtz1, fil, col);
printf("Introduzca los datos de la segunda matriz \n");
solicitarDatos(mtz2, fil, col);
sumamtz(mtzR, mtz1, mtz2, fil, col);
printf("La matriz resultante es: \n");
mostrarDatos(mtzR, fil, col);
liberar(mtz1, mtz2, mtzR, fil);
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
	for(i=0; i<fil; i++){
		for(j=0; j<col; j++){
			printf("mtz[%d][%d],  \n",i+1,j+1);
			scanf("%d", &mtz[i][j]);
}
}
}

void sumamtz(int **mtzR, int **mtz1, int **mtz2, int fil, int col){
int i,j;
    for(i=0; i<fil; i++){
    for(j=0; j<col; j++)
	mtzR[i][j] = mtz1[i][j] + mtz2[i][j];
}
}

void mostrarDatos(int **mtz, int fil, int col){
int i,j;
    for(i=0; i<fil; i++){
    for(j=0; j<col; j++)
    printf("mtz[%d][%d]=%d \n",i+1,j+1, mtz[i][j]);
}
}

void liberar(int **mtzR, int **mtz1, int **mtz2, int fil){
int i;
for(i=0;i<fil;i++){
free(mtz2[i]);
free(mtz1[i]);
free(mtzR[i]);
}
free(mtz2);
free(mtz1);
free(mtzR);
}
