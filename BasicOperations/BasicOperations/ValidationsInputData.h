#pragma once
#include <iostream>

using namespace std;
///Libreria de validacion de entrada de Datos
bool variableEsNumero(char* x, int d)
{
	int cont = 0, letra =0, cont2 = 0;
	for (int i = 0; i < d; i++)
	{
		letra = (int)x[i];
		if ((letra >=32 && letra < 45 ) || letra == 47)
		{
			cont++;
		}
		else if(letra >= 58 && letra <= 255 )
		{
			cont++;
		}
		else if (letra == 46 || letra == 45)
		{
			cont2++;
			cont = cont;
		}
		 else{
			cont = cont;
		}
	}
	if (cont== 0 && cont2 <=1)
	{
		return false;
	}
	else 
	{
		return true;
	}
	
}
bool variableEsNumeroEntero(char* x, int d)
{
	int cont = 0, letra = 0;
	for (int i = 0; i < d; i++)
	{
		letra = (int)x[i];
		if (letra >= 32 && letra <= 47)
		{
			cont++;
		}
		else if (letra >= 58 && letra <= 255)
		{
			cont++;
		}
		else {
			cont = cont;
		}
	}
	if (cont == 0)
	{
		return false;
	}
	else
	{
		return true;
	}

}
/*bool variableEsCaracter(float c)
{

}
bool variableEsCaracterEspecial(float e)
{

}*/

