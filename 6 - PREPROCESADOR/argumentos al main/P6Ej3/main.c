#include <stdio.h>
#include <stdlib.h>

    /*a. Investigue las funciones de conversi�n de texto a n�mero y escriba un programa �calculadora.c� que
    reciba dos n�meros enteros y un operador como argumentos a la funci�n main e imprima en pantalla el
    resultado de la operaci�n. El operador debe ser: �+�, �-�, �/�, �.�. Si el operador recibido no es uno de los
    mencionados anteriormente, entonces el programa debe imprimir un mensaje de error.

    b. Utilice una terminal para compilar el programa a trav�s de la l�nea de comandos.

*/

    int main (int argc, char * argv[]) {


            printf ("Nro entero  %d \n", atoi (argv[1]));
            printf ("Nro entero %d \n", atoi(argv[2]));
            printf ("OPERADOR %s \n", argv[3]);

            switch (argv[3][0]){
                case '+' : printf (" La suma es: %d \n ", (atoi(argv [2]) + atoi(argv [1])) );
                break;
                case '-' : printf (" La resta es: %d \n ", (atoi (argv [2]) - atoi (argv [1])) );
                break;
                case '*' : printf (" El producto es: %d \n ",(atoi(argv [2]) * atoi (argv [1])) );
                break;
                case '/' : printf (" La division es: %f \n ",(float)atoi (argv [2]) / atoi(argv [1]));
                break;

                default: printf("ERROR \n");
            }
            //la multiplicacion por compilador tengo que llamarla con \*




        return 0;
        }
