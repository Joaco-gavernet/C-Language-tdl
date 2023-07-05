#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define DIMF 5
#define DEBUG


        /*Realice un programa que genere un vector de 1000 enteros al azar y utilice una funci�n para localizar un
    elemento. Se pide:

    a) Implementar la funci�n de b�squeda que, dado un entero, retorne la posici�n donde se encuentra.
    En caso de no existir el n�mero retorne -1.

    b) Modificar a) para agregar informaci�n de depuraci�n que permita imprimir en consola la cantidad
    de veces que se debi� acceder al arreglo para encontrar (o no) el elemento en cada llamado a la
    funci�n. Utilice las directivas del procesador para activar/desactivar la depuraci�n e imprimir/no
    imprimir la informaci�n en la consola.

    c) Verifique el tama�o del programa compilando con la depuraci�n y sin la depuraci�n. Explique
    porque difieren.
    */

//PROTOTIPOS
void cargarVector(int [], int);
void imprimirVector(int [], int);
int buscarPosicion(int [], int, int);

int main()
{
    srand(time(NULL));
    int array [10];
    int i;
    for (i=0; i<10;i++){
        array [i] = rand() % 10;
    }
    imprimirVector(array, DIMF);
    int x;
    int num;
    printf ("Ingrese numero a buscar en el vector: \n");
    scanf ("%d", &num);
    x = buscarPosicion(array, DIMF, num);
    printf ("La posicion del numero en el vector es: %d", x+1);


    //Falta inciso de verifique el tamano del programa. preguntar como se hace

    return 0;
}


void cargarVector(int v[], int cant) {
    int i;
    for (i = 0; i < cant; i++)
        v[i] = rand() % 21;
}

void imprimirVector(int v[], int cant) {
    printf("Imprime vector: \n");
    int i;
    for (i = 0; i < cant; i++)
        printf("%d ", v[i]);
}

int buscarPosicion(int v[], int cant, int num) {
    int i;
    for (i = 0; i < cant ; i++){
        if (v[i] == num) {
            break;
        }
    }
    #ifdef DEBUG
        printf("Se accedio %d veces \n", i == cant ? cant : i+1); // si defino dbug entra aca.
    #endif // DEBUG

    return (i == cant ? -1 : i); //si no lo encuentra retorna -1
}
