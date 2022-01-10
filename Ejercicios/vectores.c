#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void darTam(int *);
void crearArreglo(float **, int);
void solicitarDatos(float *, int);
void mostrarDatos(float, float, float, float);
void liberar(float *, float *);
float calcularProdEscalar(float *, float *, int);
float calcularNorma(float *, int);
float calcularCoseno(float, float, float);

void main()
{

float *V1, *V2, prodEsc, Norma1, Norma2, Coseno; 
int N;
darTam(& N);
if(N>=2 && N<=10)
{
	crearArreglo(&V1, N);
	crearArreglo(&V2, N);
	printf("Introduzca los datos del primer vector\n");
	solicitarDatos(V1, N);
	printf("Introduzca los datos del segundo vector\n");
	solicitarDatos(V2, N);
	prodEsc = calcularProdEscalar(V1, V2, N);
	Norma1 = calcularNorma(V1, N);
	Norma2 = calcularNorma(V2, N);
	Coseno = calcularCoseno(prodEsc, Norma1, Norma2);
	mostrarDatos(prodEsc, Norma1, Norma2, Coseno);
	liberar(V1, V2);
}
else
	printf("El arreglo debe ser de 2 a 10 dimensiones");
}

void darTam(int * N){
printf("Dame el tamaño \n");
scanf("%d", N);
}

void crearArreglo(float **V, int elem){
*V=(float*)malloc(sizeof(float)*elem);
if(*V == NULL){
printf("No hay memoria disponible... \n");
exit(0);}
}

void solicitarDatos(float *A, int elem){
int i;
for(i=0; i<elem; i++){
printf("A[%d],  \n",i+1);
scanf("%f", &A[i]);
}
}

void mostrarDatos(float pe, float N1, float N2, float cos)
{
	printf("El producto escalar es: %f \n", pe);
	printf("La norma del vector 1 es: %f \n", N1);
	printf("La norma del vector 2 es: %f \n", N2);
	printf("El coseno es: %f \n", cos);
}

void liberar(float *A, float *A2){
free(A);
free(A2);
}

float calcularProdEscalar(float * V1, float * V2, int N)
{
int i;
float suma;
	suma=0;
	for(i=0; i<N; i++)
	{
	suma = (suma + (V1[i] * V2[i]));
	}
	return suma;
}
float calcularNorma(float * V1, int N)
{
	int i;
	float suma;
	suma=0;
	for(i=0; i<N; i++)
	{
	suma = (suma + (V1[i] * V1[i]));
	}
	if(suma>=0)
	suma = sqrt(suma);
	else{
	suma= suma*-1;
	suma = sqrt(suma);
}
	return suma;
	
}
float calcularCoseno(float pe, float N1, float N2)
{
	float coseno;
	coseno=0;
	if(pe<0)
	{
	pe = pe*-1;
	coseno = sqrt(pe)/(N1*N2);
	}
	else
	coseno = sqrt(pe)/(N1*N2);
	
	coseno = 1/((coseno*180)/3.1416);
	
	return coseno;
}



