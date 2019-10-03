#include <stdio.h>
#include <stdlib.h>
#include "empleado.h"
#include "empleado.c"
#include "utn.h"
#include "utn.c"
#include <string.h>

int main()
{
    int option;
	int bIdEmpleado;
	struct sEmployee aEmpleados[QTY_EMPLOYEES];
	struct sEmployee bEmpleado;
	initLugarLibreEmpleado(aEmpleados,QTY_EMPLOYEES);
	int flagEmpleado = 0;
	do{
		printf("\n1) Alta de empleados.\n");
		printf("2) Baja de empleados.\n");
		printf("3) Modificacion de empleados.\n");
		printf("4) Listar empleados.\n");
		printf("5) Salir.\n");
		getInt(&option,"Ingrese una opcion.\n","Error. Opcion inválida\n",0,10,3);
		switch (option)
		{
			case 1: if( buscarLugarLibreEmpleado(aEmpleados,QTY_EMPLOYEES)>=0)
				{
					int index = buscarLugarLibreEmpleado(aEmpleados,QTY_EMPLOYEES);
					pedirDatosEmpleado(&bEmpleado);
					altaEmpleadoPorId(aEmpleados,QTY_EMPLOYEES,bEmpleado,index);
				}else{
					printf("No hay mas lugar libre.");
				}
				system("pause");
				flagEmpleado = 1;
					break;
			case 2: if(flagEmpleado==1){
			        imprimirArrayEmpleado(aEmpleados, QTY_EMPLOYEES);
					getInt(&bIdEmpleado,"Ingrese un ID para dar de baja:","Error",0,1000,2);
					if(bajaEmpleadoPorId(aEmpleados,QTY_EMPLOYEES,bIdEmpleado) == -1)
					{
						printf("Opcion incorrecta.\n");
					}
                }else{
                    printf("Error. Primero debe ingresar un empleado.\n");
                }
                system("pause");
					break;
			case 3:	if(flagEmpleado==1){
                    imprimirArrayEmpleado(aEmpleados, QTY_EMPLOYEES);
					getInt(&bIdEmpleado,"Ingrese un ID para modificar:","Error",0,1000,2);
					pedirDatosEmpleado(&bEmpleado);
					bEmpleado.id = bIdEmpleado;
					modificarEmpleadoPorId(aEmpleados,QTY_EMPLOYEES,bEmpleado);
                }else{
                    printf("Error. Primero debe ingresar un empleado.\n");
                }
                system("pause");
					break;
			case 4:	if(flagEmpleado==1){
                    imprimirArrayEmpleado(aEmpleados,QTY_EMPLOYEES);
			}else{
                    printf("Error. Primero debe ingresar un empleado.\n");
                }
                system("pause");
					break;
			case 5:
                    break;
			default: printf("Error. Ingrese una opcion valida.\n");
                system("pause");
					break;
		}
		system("cls");
	}while(option!=5);
    return 0;
}
