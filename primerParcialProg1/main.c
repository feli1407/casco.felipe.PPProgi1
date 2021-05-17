#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 50

typedef struct
{
    int id;
    char nombre[20];
    int infectados;
    int recuperados;
    int muertos;
} ePais;

void actualizarRecuperados(ePais unPais,int recuperadosDelDia);
void invertirCadena(char cadena[]);


int main()
{
    ePais paises[TAM];
    char cadenaTest[]="hola";

    actualizarRecuperados(paises[10],500);
    invertirCadena(cadenaTest);



    return 0;
}

void actualizarRecuperados(ePais unPais,int recuperadosDelDia)
{
    unPais.recuperados+=recuperadosDelDia;
}
void invertirCadena(char cadena[])
{
    int tam=strlen(cadena);
    char auxCadena[100];

    for(int i=tam;i>0;i++)
    {
        auxCadena[i]=cadena[i];
    }

    strcpy(cadena,auxCadena);
}

