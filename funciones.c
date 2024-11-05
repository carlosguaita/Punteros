#include <stdio.h>
#include <math.h>

float ingresarComponente(char comp, int num){
    float c;
    printf("Ingrese la componente %c del punto %d: ",comp,num);
    scanf("%f",&c);
    return c;
}

void calcularDistancias(float p[3][2], float *a, float *b, float *c){
    *a = sqrt(pow(p[0][0]-p[1][0],2)+pow(p[0][1]-p[1][1],2));
    *b = sqrt(pow(p[0][0]-p[2][0],2)+pow(p[0][1]-p[2][1],2));
    *c = sqrt(pow(p[1][0]-p[2][0],2)+pow(p[1][1]-p[2][1],2));
}

void calcularPerimetro(float *p, float *a, float *b, float *c){
    *p=*a + *b + *c;
}

float calcularArea(float *p, float *a, float *b, float *c){
    float s= *p /2;
    float area = sqrt(s*(s-*a)*(s-*b)*(s-*c));
    return area;
}

void imprimir(float area, float p){
    printf("El perimetro del triangulo es: %f\n",p);
    printf("El area del triangulo es: %f\n",area);
}