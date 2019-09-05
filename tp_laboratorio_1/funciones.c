#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#include <string.h>

int sumarDosNumeros(float primerNumero,float segundoNumero)
    {
     int suma;
     suma=primerNumero+segundoNumero;
     return suma;
    }
  int restarDosNumeros(float primerNumero,float segundoNumero)
   {
     int resta;
     resta=primerNumero-segundoNumero;
     return resta;
   }
  int multiplicarDosNumeros(float primerNumero,float segundoNumero)
  {
     int multiplicacion;
     multiplicacion=primerNumero*segundoNumero;
     return multiplicacion;
  }
  float dividirDosNumeros(float primerNumero,float segundoNumero)
  {
    float division;
    division=primerNumero/segundoNumero;
    return division;
  }
  float calcularFactorial(float numero)
  {
    int i;
    int acumulador = 1;
    for ( i = 1; i <= numero; i++)
    {
        acumulador = acumulador*i;
    }
   return acumulador;
  }
