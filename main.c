#include <stdio.h>
#include "funciones.h"

int main (int argc, char *argv[]) {

    float a, b, c, p, area;
    float puntos[3][2];
    puntos[0][0]=ingresarComponente('X',1);
    puntos[0][1]=ingresarComponente('Y',1);
    puntos[1][0]=ingresarComponente('X',2);
    puntos[1][1]=ingresarComponente('Y',2);
    puntos[2][0]=ingresarComponente('X',3);
    puntos[2][1]=ingresarComponente('Y',3);

    calcularDistancias(puntos,&a,&b,&c);
    calcularPerimetro(&p,&a,&b,&c);
    area = calcularArea(&p,&a,&b,&c);
    imprimir(area,p);


    return 0;
}