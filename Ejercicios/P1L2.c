#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct
{
	char nombre[30];
	char sexo[30];
	float sueldo;
}empleado;

void numPers(int *);
void crearEstudiante(empleado **, int);
void solicitarDatos(empleado *, int);
void mostrarDatos(empleado *, int, int);
void liberar(empleado *, int);
void obtMayMen(empleado *, int, int *, int *);

void main()
{
	int N;
	int Pmay, Pmen;
	numPers(&N);
	empleado *emp;
	crearEstudiante(&emp, N);
	solicitarDatos(emp, N);
	obtMayMen(emp, N, &Pmay, &Pmen);
	mostrarDatos(emp, Pmay, Pmen);
	liberar(emp, N);
}

void numPers(int *N)
{
	printf("Ingrese el numero de empleados \n");
	scanf("%d", N);
}

void crearEstudiante(empleado **emp, int N)
{
	*emp = (empleado *)malloc(sizeof(empleado)*N);
	if(emp==NULL)
	{
	printf("No hay memoria disponoble \n");
	exit (0);
	}
}
void solicitarDatos(empleado *emp, int N)
{
int i;
	for(i=0;i<N;i++)
	{
		getchar();
		printf("Introdusca el nombre:[%d] \n", i+1);
		scanf("%[^\n]",emp[i].nombre);
		getchar();
		printf("Introduzca el sexo:[%d] \n", i+1);
		scanf("%[^\n]", emp[i].sexo);
		getchar();
		printf("Introdusca el sueldo:[%d]\n", i+1);
		scanf("%f",&emp[i].sueldo);
	}
}
void mostrarDatos(empleado *emp, int Pmay, int Pmen)
{
	printf("La persona de mayor sueldo es: %s \n", emp[Pmay].nombre);
	printf("La persona de menor sueldo es: %s \n", emp[Pmen].nombre);
}
void liberar(empleado *emp, int N)
{
free(emp);
}
void obtMayMen(empleado *emp, int N, int *Pmay, int *Pmen)
{
int i;
float may, men;
	may = emp[0].sueldo;
	men = emp[0].sueldo;
	*Pmay = 0;
	*Pmen = 0;
	for(i=1;i<N;i++)
	{
		if(may>emp[i].sueldo)
		*Pmay = *Pmay;
		else
		*Pmay = i;
	}
	for(i=1;i<N;i++)
	{
		if(men<emp[i].sueldo)
		*Pmen = *Pmen;
		else
		*Pmen = i;
	}
}

