
/**UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
*Este programa realiza las operaciones, suma, resta, multiplicación y división
*@author Abigail Cabascango López
*@version 1.3.7
*Fecha de creación:19/05/2020 Fecha de modificación:19/05/2020 */

#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include "ValidationsInputData.h"
#include "MathOperations.h"

using namespace std;
float leerDatos();
int selectoOperations();
bool repetAgain();

int main()
{
	float numero2, numero1; 
	bool control = true;
	float resultado;

	while (control == true)
	{
		int options = selectoOperations();
		switch (options)
		{
		case 1:
			cout << "Ingresa el primer dato : ";
			numero1 = leerDatos();
			cout << "Ingresa el segundo dato : ";
			numero2 = leerDatos();
			resultado = addition(numero1, numero2);
			cout << resultado;
			control = repetAgain();
			break;
		case 2:
			cout << "Ingresa el primer dato : ";
			numero1 = leerDatos();
			cout << "Ingresa el segundo dato : ";
			numero2 = leerDatos();
			resultado = subtraction(numero1, numero2);
			cout << resultado;
			control = repetAgain();
			break;
		case 3:
			cout << "Ingresa el primer dato : ";
			numero1 = leerDatos();
			cout << "Ingresa el segundo dato : ";
			numero2 = leerDatos();
			resultado = multiplition(numero1, numero2);
			cout << resultado;
			control = repetAgain();
			break;
		case 4:
			cout << "Ingresa el primer dato : ";
			numero1 = leerDatos();
			cout << "Ingresa el segundo dato : ";
			numero2 = leerDatos();
			resultado = division(numero1, numero2);
			cout << resultado;
			control = repetAgain();
			break;
		default:
			
			control = true;
			break;
		}
	}
	
	
	return 0;
}

//Funcion para seleccionar la operacion hacer
int selectoOperations()
{
	int dimension = 25;
	char opcion [25] ;
	int opc;
	do
	{
		cout << "\nBienvenido, ingresa el numero de la operacion que desees hacer:\n "<< "1 Suma\n 2 Resta\n 3 Multiplicacion\n 4 Division\n";
		fgets(opcion, dimension, stdin);
	} while (variableEsNumero(opcion, dimension) == true);
	opc = atoi (opcion);

		return opc;
}
//Funcion para leer Datos del teclado
float leerDatos()
{
	int dimension = 7;
	char numero[7];
	do
	{
		fgets(numero, dimension, stdin);
		if (variableEsNumero(numero, dimension))
		{
			cout << "\n Vuelva a ingresar: ";
		}
	} while (variableEsNumero(numero, dimension));
	return atof(numero);
}
//Funcion para repetir el programa
bool repetAgain()
{
	float repet;
	cout << "\nDesea volver a comenzar presione 1, caso contrario 0: ";
	repet = leerDatos();
	if (repet == 1 )
	{
		return true;

	}else
	if(repet == 0){
		return false;
	}
	else
	{
		repetAgain();
	}
}