#include <stdio.h>
#include <stdlib.h>

        /*Escriba un programa que, dado un n�mero entero n ingresado por
        teclado, construya una pir�mide de pascal de n filas. Un tri�ngulo de
        pascal es una serie de filas apiladas que comienza con un elemento y
        agrega un elemento m�s en cada fila. El primer y �ltimo elemento de
        cada fila es un 1. Los dem�s elementos se calculan sumando los 2
        n�meros superiores de la fila anterior. Por ejemplo, para obtener el
        segundo elemento de la cuarta fila (4) deben sumarse el primer (1) y
        segundo (3) elemento de la tercera fila de forma que 1+3 = 4. Tenga en
        cuenta las siguientes condiciones:

        a) Utilizar una estructura de datos eficiente. Contemple la informaci�n necesaria para recorrer
        la pir�mide y liberar la memoria de forma correcta.
        b) Implemente una funci�n que dado un entero n retorne una pir�mide de pascal de n filas.
        c) Implemente una funci�n para imprimir la pir�mide.
        d) Implemente una funci�n para destruir la pir�mide
*/
    int * inicializarPiramide (int cant);

    int main()
    {
        //FILAS DE LA MATRIZ
        int filas;
        printf("Ingrese numero de filas de la piramide de pascal \n");
        scanf ("%d", &filas);
        printf("\n");
        //CANTIDAD DE ESPACIO QUE HAY QUE RESERVAR
        int cant = 0;
        for (int i=1; i<=filas;i++){
            cant+=i;
        }
        printf("La cantidad de espacios que hay que reservar es: %d \n", cant);
        printf("\n");

        //RESERVA DE MEMORIA
        int * piramide = inicializarPiramide(cant);
        //CARGA DE PIRAMIDE
        cargarPiramide (& piramide, filas);


        return 0;
    }

    //INICIALIZACION DE LA PIRAMIDE --------------------------
    int * inicializarPiramide (int cant){
        int *matriz = (int*) malloc (cant*sizeof (int)); //reservo memoria
    return matriz;
    }

    //CARGA DE LA PIRAMIDE-----------------------------------
    void cargarPiramide(int ** piramide, int cant){

    int n;
    for (int j=0; j<cant; j++){ //---> recorro columnas
        printf("Ingrese numero para agregarlo a la matriz: \n");
        scanf("%d", &n);
        (*matrizTriangular)[j] = n;
      //  (*matrizTriangular)[j] = rand()%21;
        }
    printf("MATRIZ CARGADA \n");

        }

