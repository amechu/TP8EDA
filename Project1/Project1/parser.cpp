#include "parser.h"
#include <string.h>
#include <iostream>
#include <stdlib.h>
#include <ctype.h>

#define MAX_PARAM_SIZE 14 //13 caracterse de la ip + el terminador.

bool parseCallback(char *key, char *value, void * parameters)
{

	bool validez = false; //Respuesta del callback
	char casehandler[MAX_PARAM_SIZE]; //String para trabajar con las mayusculas/minusculas.
	int i;
	bool cerrarBucle = false;

	if (key != NULL && key[0] == '-') // Analizo parámetros
	{


		if (strlen(&(key[1])) <= MAX_PARAM_SIZE) {
			strcpy_s(casehandler, &(key[1])); // para no tomar con el strcmp el OPTION_IDENTIFIER
		}

		for (i = 0; (i < OPTION_QTY) && cerrarBucle != true; i++) //ciclo el arreglo de opciones hasta hallar la opcion igual
		{

			if (!(strcmp(strlower(casehandler), )))
			{
				if (checkValues(key, value, parameters)) {
					validez = true;
					cerrarBucle = true;
				}
			}
			else  //Ocurre en el caso en el que la clave no es valida.
			{
				validez = false;
			}
		}
	}
	else {
		std::cout << "Error: You have entered a parameter. This program takes no parameters as valid input.";
	}
	return validez;
}



static char* strlower(char str[])
{
	int i;
	for (i = 0; str[i] != '\0'; i++) {
		str[i] = tolower(str[i]); //Todo caracter en mayuscula se pasa a minuscula, logrando que el programa sea case insensitive.
	}
	return str;
}

static bool checkValues(char * key, char * value, void * parameters) {


	class netData * param = (class netData *)parameters;
	bool validez = false;

	bool endLoop = false;

	for (unsigned int i = 0; i <  && endLoop != true; i++) {
		if (!strcmp(value, )) { //Tomamos la IP que vino como parametro y la comparamos con la lista de IPs...
			validez = true; //...Si coincide, no hay problema y avisamos que es valida. Si no, validez vuelve en false.
			endLoop = true;
		}
	}

	return validez;
}

void parserInit(parserData parser)
{
	parser.optArray[0] = "path";
	parser.optArray[1] = "threshold";
}

