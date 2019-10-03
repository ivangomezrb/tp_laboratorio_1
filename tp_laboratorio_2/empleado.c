#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "empleado.h"
#include "utn.h"


static int generarId(void)
{
	static int id = 0;
	id++;
	return id;
}
int initLugarLibreEmpleado(struct sEmployee *aArray, int cantidad)
{
	int retorno = -1;
	int i;
	if(aArray!=NULL && cantidad>0){
		for(i=0;i<cantidad;i++){
			aArray[i].status = STATUS_EMPTY;
		}
		retorno = 0;
	}
	return retorno;
}
int ordenarArrayEmpleado(struct sEmployee *aArray, int cantidad){
	int i;
	int retorno = -1;
	struct sEmployee bEmployee;
	int fSwap;
	if(aArray != NULL && cantidad>0)
	{
		retorno = 0;
		do
		{
			fSwap = 0;
			for(i=0;i<cantidad-1;i++)
			{
				if(strcmp(aArray[i].name,aArray[i+1].name)>0)
				{
					fSwap = 1;
					bEmployee = aArray[i];
					aArray[i]=aArray[i+1];
					aArray[i+1]=bEmployee;
				}
			}
		}while(fSwap);
	}
	return retorno;
}
int imprimirArrayEmpleado(struct sEmployee *aArray, int cantidad){
	int i;
	int retorno = -1;
	if(aArray != NULL && cantidad>0)
	{
		retorno = 0;
		printf("Empleados:\n");
		for(i=0;i<cantidad;i++)
		{
			if(aArray[i].status == STATUS_NOT_EMPTY){
				printf("Id: %d - Nombre: %s - Apellido: %s - Salario: %.2f - Sector: %d\n",aArray[i].id,aArray[i].name,aArray[i].lastName,aArray[i].salary,aArray[i].sector);
			}
		}
	}
	return retorno;
}
int buscarLugarLibreEmpleado(struct sEmployee *aArray, int cantidad)
{
	int retorno = -1;
	int i;
	if(aArray!=NULL && cantidad>0){
		for(i=0;i<cantidad;i++){
			if(aArray[i].status == STATUS_EMPTY){
				retorno = i;
				break;
			}
		}
	}
	return retorno;
}
int buscarEmpleadoPorId(struct sEmployee *aArray,int cantidad,int id){
	int retorno = -1;
	int i;
	if(aArray!=NULL && cantidad>0){
		for(i=0;i<cantidad;i++){
			if(aArray[i].id==id && aArray[i].status == STATUS_NOT_EMPTY){
				retorno = i; // Devuelvo la posicion
				break;
			}
		}
	}
	return retorno;
}
int altaEmpleadoPorId(struct sEmployee *aArray, int cantidad,struct sEmployee empleado,int index)
{
	int retorno = -1;
	empleado.id = generarId();
	if(aArray!=NULL && cantidad>0){
		if(index>=0){
				retorno = 0;
				aArray[index] = empleado;
				aArray[index].status = STATUS_NOT_EMPTY;
		}
	}
	return retorno;
}
int verificarBaja(void){
	int retorno = -1;
	char respuesta;
	getChar(&respuesta,"Esta seguro que desea dar la baja? s/n \n","Error\n",'a','z',0);
	if(respuesta=='s'){
		retorno = 0;
		}else if (respuesta=='n'){
			retorno = 1;
		}else {
			retorno = -1;
		}
	return retorno;
	}

int bajaEmpleadoPorId(struct sEmployee *aArray, int cantidad,int id)
{
	int retorno = -1;
	int indice = buscarEmpleadoPorId(aArray,cantidad,id);
	if(verificarBaja()==0){
		if(aArray!=NULL && cantidad>0){
			if(indice>=0){
				retorno = 0;
				aArray[indice].status = STATUS_EMPTY;
			}
		}
	}
	return retorno;
}
int modificarEmpleadoPorId(struct sEmployee *aArray,int cantidad,struct sEmployee empleado)
{
	int retorno = -1;
	if(aArray!=NULL && cantidad > 0){
	int posicion =buscarEmpleadoPorId(aArray,cantidad,empleado.id);
		if (posicion >= 0){
			aArray[posicion] = empleado;
			aArray[posicion].status = STATUS_NOT_EMPTY;
		}
	}
	return retorno;
}
int pedirDatosEmpleado(struct sEmployee* pEmpleado)
{
	int retorno = -1;
	struct sEmployee bEmployee;
	getString(bEmployee.name,"Ingrese nombre: ","Error\n",0,50,2);
	getString(bEmployee.lastName,"Ingrese Apellido: ","Error\n",0,50,2);
	getFloat(&bEmployee.salary,"Ingrese salario: ","Error\n",1,100000000000,2);
	getInt(&bEmployee.sector,"Ingrese sector : ","Error\n",1,10000000,2);
	*pEmpleado = bEmployee;
	return retorno;
}


