#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*

Escriba un programa que lea un n�mero entero n desde teclado y luego reserve memoria en forma
din�mica para un arreglo de n enteros. Inicial�celo con valores aleatorios y a continuaci�n calcule e
imprima el m�ximo n�mero almacenado. Por �ltimo, libere la memoria reservada din�micamente.
Nota: Modularice la reserva de memoria, la inicializaci�n y el c�lculo del m�ximo
*/
void imprimir (int * p, int n);
void maximo (int * p, int n);
void f (int ** p, int n); //reserva espacio en el vector
int main()
{
    srand (time(NULL));

    int * ptr = NULL; //declaro el puntero
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
void f (int  ** ptr, int n) {
    *ptr = (int *) malloc(n * sizeof(int)); // lleno

    for (int i=0; i<n; i++){
        (*ptr)[i] = rand() % 51; //inicializo
    }

}
//---------------------------------------------
void imprimir (int  * ptr, int n) {

    printf("Imprimo los numeros del vector: \n");
    for (int i=0; i<n; i++){
      printf("%d \n" , ptr[i]);
    }
}
//----------------------------------------------
void maximo (int  * ptr, int n) {
    int max = -1;

    printf("Calculo el maximo ");
    for (int i=0; i<n; i++){
      if ((ptr[i])>max)
        max = ptr [i];
    }
    printf("%d",max);
}
