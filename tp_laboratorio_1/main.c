#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#include <string.h>

 int main()
 {
    float primerNumero;
    float segundoNumero;
    int option;
    int pudeCalcular;
    float resultadoSuma;
    float resultadoResta;
    float resultadoMultiplicacion;
    float resultadoDivision;
    int factorialPrimerNumero;
    int factorialSegundoNumero;
    while(option!=5)
    {
        printf("---CALCULADORA---\n");
        printf("Seleccione una opción:\n");
        printf("1.Ingresar el primer operando\n");
        printf("2.Ingresar el segundo operando\n");
        printf("3.Calcular todas las operaciones\n");
        printf("4.Mostrar resultados\n");
        printf("5.Salir\n");
        scanf("%d",&option);
        fflush(stdin);
        switch(option)
            {
                case 1: printf("Valor primer operando: \n");
                        scanf("%f",&primerNumero);
                        fflush(stdin);
                        break;
                case 2: printf("Valor segundo operando:\n");
                        scanf("%f",&segundoNumero);
                        fflush(stdin);
                        break;
                case 3: resultadoSuma=sumarDosNumeros(primerNumero,segundoNumero);
                        resultadoResta=restarDosNumeros(primerNumero,segundoNumero);
                        resultadoMultiplicacion=multiplicarDosNumeros(primerNumero,segundoNumero);
                        resultadoDivision=dividirDosNumeros(primerNumero,segundoNumero);
                        factorialPrimerNumero=calcularFactorial(primerNumero);
                        factorialSegundoNumero=calcularFactorial(segundoNumero);
                        pudeCalcular=1;
                        break;
                case 4:if(pudeCalcular==1)
                {
                    printf("1.El resultado de la suma es:%.2f\n",resultadoSuma);
                    printf("2.El resultado de la resta es:%.2f\n",resultadoResta);
                    if(segundoNumero==0)
                    {
                    printf("3.No es posible dividir por 0.\n");
                    }else
                    {
                    printf("\n3.El resultado de division es:%.2f\n",resultadoDivision);
                    }
                    printf("4.El resultado de la multiplicacion es:%.2f\n",resultadoMultiplicacion);
                    if(primerNumero<0 && segundoNumero<0)
                    {
                    printf("5.No es posible realizar el factorial de numeros negativos.\n");
                    }
                    else if (primerNumero>=0 && segundoNumero<0)
                    {
                    printf("Factorial primer operando:%d ,el segundo es numero negativo y no puede calcularse su factorial",primerNumero);
                    } else if (primerNumero<0 && segundoNumero>= 0)
                    {
                    printf("El primer operando es numero negativo y no puede calcularse su factorial,Factorial segundo operando:%d ",segundoNumero);
                    } else
                    {
                    printf("5.Factorial primer operando:%d , Factorial segundo operando:%d\n",factorialPrimerNumero,factorialSegundoNumero);
                    }
                    }
                    else
                    {
                    printf("Antes de calcular debe ingresar ambos operandos.\n");
                    }
                    break;
                case 5:
                        break;
                default:  printf("Error. Opción inválida.");
                        break;
            }
    }
    return 0;
 }


