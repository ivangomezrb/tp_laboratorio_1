#ifndef EMPLEADO_H_INCLUDED
#define EMPLEADO_H_INCLUDED
#define STATUS_EMPTY 0
#define STATUS_NOT_EMPTY 1
#define QTY_EMPLOYEES 1000
#define QTY_CARACTERES 50

struct sEmployee{
	int id;
	int status;

	char name[51];
	char lastName[51];
	float salary;
	int sector;
};
int initLugarLibreEmpleado(struct sEmployee *aArray, int cantidad);
int buscarLugarLibreEmpleado(struct sEmployee *aArray, int cantidad);
int pedirDatosEmpleado(struct sEmployee* pEmpleado);
int ordenarArrayEmpleado(struct sEmployee *aArray, int cantidad);
int imprimirArrayEmpleado(struct sEmployee *aArray, int cantidad);
int buscarEmpleadoPorId(struct sEmployee *aArray,int cantidad,int id);
int altaEmpleadoPorId(struct sEmployee *aArray, int cantidad,struct sEmployee empleado,int index);
int bajaEmpleadoPorId(struct sEmployee *aArray, int cantidad,int id);
int verificarBaja(void);
int modificarEmpleadoPorId(struct sEmployee *aArray,int cantidad,struct sEmployee empleado);

#endif // EMPLEADO_H_INCLUDED

