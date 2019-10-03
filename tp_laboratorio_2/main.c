
#include <stdio.h>
#include <stdlib.h>
#include "empleado.h"
#include "utn.h"
#include <string.h>

int main()
{
    int option;
	//int bIdPantalla;
	struct sEmployee aEmpleados[QTY_EMPLOYEES];
	struct sEmployee bEmpleado;
	initLugarLibreEmpleado(aEmpleados,QTY_EMPLOYEES);
	do{
		printf("1) Alta de empleados.\n");
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
					break;/*
			case 2: imprimirArrayPantalla(aPantalla, QTY_PANTALLAS);
					getInt(&bIdPantalla,"Ingrese un ID para dar de baja:","Error",0,1000,2);
					if(bajaPantallaPorId(aPantalla,QTY_PANTALLAS,bIdPantalla) == -1)
					{
						printf("Opcion incorrecta.\n");
					}
					break;
			case 3:	imprimirArrayPantalla(aPantalla, QTY_PANTALLAS);
					getInt(&bIdPantalla,"Ingrese un ID para modificar:","Error",0,1000,2);
					pedirDatosPantalla(&bPantalla);
					bPantalla.idPantalla = bIdPantalla;
					modificarPantallaPorId(aPantalla,QTY_PANTALLAS,bPantalla);
					break;
			case 4:	imprimirArrayPantalla(aPantalla,QTY_PANTALLAS);
				if( buscarLugarLibrePantalla(aPublicidad,QTY_PUBLICIDADES)>=0)
					{
						int index = buscarLugarLibrePublicidad(aPublicidad,QTY_PANTALLAS);
						// pedirDatosPublicidad(&bPublicidad);
						getInt(&bIdPublicidad,"Ingrese ID Pantalla:","Error",0,1000,2);
						if(buscarPantallaPorId(aPantalla,QTY_PANTALLAS,bIdPublicidad)!= -1){
							altaForzadaPublicidad(&bPublicidad);
							bPublicidad.idPantalla=bIdPublicidad;
							altaPublicidadPorId(aPublicidad,QTY_PUBLICIDADES,bPublicidad,index);
						}else{
							printf("Id incorrecto.\n");
						}
					}else{
						printf("No hay mas lugar libre.");
					}
					break;
			case 5:	imprimirArrayPublicidad(aPublicidad,QTY_PUBLICIDADES);
					getInt(&bIdPublicidad,"Ingrese un ID para modificar:","Error",0,1000,2);
					pedirDatosPublicidad(&bPublicidad);
					bPublicidad.id = bIdPublicidad;
					modificarPublicidadPorId(aPublicidad,QTY_PUBLICIDADES,bPublicidad);
					break;
			case 6:	imprimirArrayPantalla(aPantalla, QTY_PANTALLAS);
					getInt(&bIdPublicidad,"Ingrese un ID para dar de baja:","Error",0,1000,2);
					if(bajaPublicidadPorId(aPublicidad,QTY_PUBLICIDADES,bIdPublicidad) == -1)
					{
						printf("Opcion incorrecta");
					}
					break;
			case 7: getString(&cuit,"Ingrese Cuit","Error",0,99999999,2);
					consultaFacturacion(aPantalla,QTY_PANTALLAS,aPublicidad,QTY_PUBLICIDADES,&cuit);
					break;
			case 8:	imprimirArrayPublicidad(aPublicidad,QTY_PUBLICIDADES);
					break;
			case 9:	imprimirArrayPantalla(aPantalla,QTY_PANTALLAS);
					break;
			default: printf("Error. Ingrese una opcion valida.\n");
					break;*/
		}
	}while(option!=5);
    return 0;
}
