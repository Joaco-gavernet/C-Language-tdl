#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* EJERCICIO 4
Escriba un programa que lea un n�mero entero n desde teclado y luego reserve memoria en forma
din�mica para un arreglo de n float. Inicial�celo con valores ingresados por teclado y a continuaci�n
calcule e imprima el promedio de todos ellos. Por �ltimo, libere la memoria reservada din�micamente.
Nota: Modularice la reserva de memoria, la inicializaci�n y el c�lculo del promedio.


*/
void imprimir (float * p, int n);
void maximo (float * p, int n);
void f (float ** p, int n); //reserva espacio en el vector

int main()
{
    srand (time(NULL));

    float * ptr = NULL; //declaro el puntero de float
    int n;
    printf("Lea un numero desde teclado \n");
    scanf("%d", &n); //leo el numero n desde teclado
    f(& ptr, n); //le paso la direccion del puntero

    imprimir (ptr, n);
    maximo (ptr, n);
    //libera la memoria de todo
    free (ptr);

    return 0;
}
//--------------------------------------------
void f (float  ** ptr, int n) { //reserva memoria
    *ptr = (float *) malloc(n * sizeof(float)); // lleno

    for (int i=0; i<n; i++){
        (*ptr)[i] = rand() % 51; //inicializo
    }

}
//---------------------------------------------
void imprimir (float  * ptr, int n) {

    printf("Imprimo los numeros del vector: \n");
    for (int i=0; i<n; i++){
      printf("%f \n" , ptr[i]);
    }
}
//----------------------------------------------
void maximo (float  * ptr, int n) {
    float suma = 0;

    printf("Calculo el maximo ");
    for (int i=0; i<n; i++){
        suma += ptr [i];
    }
    float prom = suma / n;
    printf("%f", prom);
}
