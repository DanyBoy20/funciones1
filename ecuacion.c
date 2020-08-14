/* PROGRAMA ECUACION.c - DESCRIPCIÓN: Solución de ecuaciones de segundo grado */
/* Bibliotecas */
#include<stdio.h>/* Biblioteca de entrada y salida estándar */
#include<stdlib.h>/* Biblioteca para las funciones del sistema */
#include<math.h>/* Biblioteca para utilizar funciones matemáticas: pow para calcular la potencia, sqrt para calcular la raíz cuadrada*/
/* Función Principal*/
main ( )
{
/*Declaración de variables - todas dobles */
double a, b, c, x1, x2, det;
/* Mensaje de bienvenida */
printf("::::: FUNCIONES 1 :::::\n\n",144); // mensaje , es solo estetica del programa
printf("Programa para calcular las raices de\nun polinomio de segundo grado\n"); 
printf("\n\t\t ax^2 + bx + c = 0"); // impresion de la ecuacion de segundo grado
printf ("\n\nIntroduzca los coeficientes de a,b y c: "); // mensaje pidiendo datos de entrada
scanf ("%lf,%lf,%lf",&a,&b,&c); // leemos y asignamos valores a variables
det = pow (b,2)-4*a*c; // potencia (pow) del valor de b menos4 X valor de a X valor de c
if (det>= 0){ /* Verificamos que la ecuación tenga raices reales */
x1=(-b + sqrt(det))/2*a; // si condicion es verdadera, realizamos las operaciones (formula cuadratica)
x2=(-b - sqrt(det))/2*a;
printf ("\n La raices son: %.2lf, %.2lf\n\n",x1, x2); // mostramos resultados
}else // si condicion falsa
printf ("\nNo existen raices reales."); // mensaje
system ("pause");
}
