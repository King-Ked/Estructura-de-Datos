#include <stdlib.h>
#include<stdio.h>
#include<math.h>
#define TAM 100
#define TRUE 1
#define FALSE 0

float pila[TAM];
int tope=-1;

void manejaError(int e)
{
	char * errores[]={"No hay memoria disponible","La pila esta llena","La pila esta vacia"};
	printf("%s",errores[e]);
}
int stackEmpy()
{
	if(tope<0)
		return TRUE;
	else
		return FALSE;
}
void push(float x)
{
	if(tope==TAM-1)
	{
		manejaError(1);
		exit(0);
	}
	tope++;
	pila[tope]=x;
}

float pop()
{
	float x;
	if(stackEmpy()==TRUE)
	{
		manejaError(2);
		return 0;
	}
	x=pila[tope];
	tope--;
	return x;
}

void lee(char *ent)
{
	int pos=0;
	printf("\n\n Introduzca la expresion en Postfija: ");
	while((ent[pos++]=getchar())!='\n');
		ent[--pos]='\0';
}

float evalua(char *ent)
{
	float a,b;
	int pos=0;
	char op[1];
	double conv;

	while(ent[pos]!='\0')
	{
		*op=ent[pos++];
		switch(*op)
		{
		case '+':
			b=pop();
			a=pop();
			push(a+b);
			break;
		case '-':
			b=pop();
			a=pop();
			push(a-b);
			break;
		case '*':
			b=pop();
			a=pop();
			push(a*b);
			break;
		case '/':
			b=pop();
			a=pop();
			if(b==0)
			{
				printf("Division sobre CERO");
				return 0;
				break;
			}
			push(a/b);
			break;
		case '^':
			b=pop();
			a=pop();
			push(pow(a,b));
			break;
		default:
			conv = atof(op);
			push(conv);
		}
	}
	return (pop());
}

void main()
{

char ent[TAM];
printf("\n Evaluacion de expresiones Postfijas \n");
printf("Operaciones Basicas: Suma, Resta, Producto, y Division\n\n");
lee(ent);
printf("\n\n\t %s = %.2f\n\n",ent,evalua(ent));
}

