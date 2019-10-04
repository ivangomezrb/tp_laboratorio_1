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
/** \brief
  *Recibe un array de Empleados y su cantidad. Setea todos los campos del array a EMPTY
  * \param array Empleados
  * \param cantidad int
  * \return int
  *Devuelve 0 si el desarrollo de la funcion fue exitoso, -1 si no fue exitoso.
  */
int initLugarLibreEmpleado(struct sEmployee *aArray, int cantidad);
/** \brief
  *Recibe un array de Empleados y su cantidad. Busca si hay algún lugar libre en el array
  * \param array Empleados
  * \param cantidad int
  * \return int
  *Devuelve -1 si el desarrollo de la funcion no fue exitoso o 0 o un número positivo que representa la posicion libre en el array .
  */
int buscarLugarLibreEmpleado(struct sEmployee *aArray, int cantidad);
/** \brief
  *Recibe la posicion de memoria de un empleado. Carga los datos en ese empleado.
  * \param struct Empleado
  * \return int
  *Devuelve 0 si el desarrollo de la funcion fue exitoso, -1 si no fue exitoso.
  */
int pedirDatosEmpleado(struct sEmployee* pEmpleado);
/** \brief
  *Recibe un array de Empleados y su cantidad. Lo ordena.
  * \param array Empleados
  * \param cantidad int
  * \return int
  *Devuelve 0 si el desarrollo de la funcion fue exitoso, -1 si no fue exitoso.
  */
int ordenarArrayEmpleado(struct sEmployee *aArray, int cantidad);
/** \brief
  *Recibe un array de Empleados y su cantidad. Lo imprime.
  * \param array Empleados
  * \param cantidad int
  * \return int
  *Devuelve 0 si el desarrollo de la funcion fue exitoso, -1 si no fue exitoso.
  */
int imprimirArrayEmpleado(struct sEmployee *aArray, int cantidad);
/** \brief
  *Recibe un array de Empleados, su cantidad y un id. Busca el empleado y devuelve la posición del array en la que se encuentra dicho empleado.
  * \param array Empleados
  * \param cantidad int
  * \param id int
  * \return int
  *Devuelve 0 si el desarrollo de la funcion fue exitoso, -1 si no fue exitoso.
  */
int buscarEmpleadoPorId(struct sEmployee *aArray,int cantidad,int id);
/** \brief
  *Recibe un array de Empleados, su cantidad, un empleado y la posición del array en la que será dado de alta dicho empleado.
  * \param array Empleados
  * \param cantidad int
  * \param struct unEmpleado
  * \param index int
  * \return int
  *Devuelve 0 si el desarrollo de la funcion fue exitoso, -1 si no fue exitoso.
  */
int altaEmpleadoPorId(struct sEmployee *aArray, int cantidad,struct sEmployee empleado,int index);
/** \brief
  *Recibe un array de Empleados,su cantidad y un id de empleado. Da la baja dependiendo de ese id.
  * \param array Empleados
  * \param cantidad int
  * \param id int
  * \return int
  *Devuelve 0 si el desarrollo de la funcion fue exitoso, -1 si no fue exitoso.
  */
int bajaEmpleadoPorId(struct sEmployee *aArray, int cantidad,int id);
/** \brief
  *No recibe nada. Verifica la baja del empleado.
  * \return int
  *Devuelve -1 si el desarrollo de la funcion no fue exitoso, 1 o 0 si fue exitoso.
  */
int verificarBaja(void);
/** \brief
  *Recibe un array de Empleados, su cantidad y un empleado. Modifica dicho empleado.
  * \param array Empleados
  * \param cantidad int
  * \param struct empleado
  * \return int
  *Devuelve 0 si el desarrollo de la funcion fue exitoso, -1 si no fue exitoso.
  */
int modificarEmpleadoPorId(struct sEmployee *aArray,int cantidad,struct sEmployee empleado);

#endif // EMPLEADO_H_INCLUDED
