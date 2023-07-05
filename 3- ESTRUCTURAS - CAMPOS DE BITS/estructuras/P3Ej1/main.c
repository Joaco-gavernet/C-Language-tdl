#include <stdio.h>
#include <stdlib.h>
#define N 3

//Defina una estructura rectangulo que contenga los siguientes campos: base (float) y altura (float).
//Escriba una funci�n que reciba una estructura rectangulo y la inicialice a partir de valores
//ingresados por teclado.
//Escriba un programa que defina un arreglo de 10 rect�ngulos (struct rectangulo) y lo
//inicialice utilizando la funci�n definida en el inciso anterior. Luego, informe el n�mero de
//rect�ngulo que tiene menor �rea.

struct rectangulo {
    float base;
    float altura;
};

void InicializarRectangulo (struct rectangulo *); //le mando el puntero al rectangulo
float CalcularArea (struct rectangulo);
void ImprimirRectangulo(struct rectangulo);
void InicializarVector(struct rectangulo [], int); //el int es del define n
int MenorArea (struct rectangulo [], int);

int main()
{
    struct rectangulo r;
    InicializarRectangulo (&r);
    ImprimirRectangulo(r);
    printf("El area del rectangulo es: %f \n", CalcularArea(r));

    struct rectangulo v[N]; //declaro vector de rectangulos

    InicializarVector(v, N);
    printf("El menor area es el rectangulo nro %d \n" ,MenorArea (v,N));


    return 0;
}

void InicializarRectangulo (struct rectangulo * r){
    printf ("Ingrese base \n");
    scanf ("%f", &((*r).base));
    printf("Ingrese altura \n");
    scanf("%f", &((*r).altura));
}
float CalcularArea (struct rectangulo r){

    float area;
    area = ((r.base) * (r.altura));

return area;
}
void ImprimirRectangulo(struct rectangulo r){

    printf("La base del rectangulo es: %f \n", r.base);
    printf("La base del rectangulo es: %f \n", r.altura);

}

void InicializarVector(struct rectangulo v[],  int cant){
    for (int i = 0; i < cant; i++){
        InicializarRectangulo (&(v[i]));
    }
}

int MenorArea (struct rectangulo v[], int cant){
    float area;
    int posicion = 9;
    float min = 99999;

    for (int i = 0; i<cant; i++){
       area= CalcularArea(v[i]);
       if (area<min){
            min = area;
            posicion = i;
       }
    }
return posicion;
}
