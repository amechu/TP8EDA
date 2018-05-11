#pragma once

#include <string>

typedef bool(*pCallback)(char *key, char *value, void * parameters);

#define OPTION_QTY 2
#define PARAM_QTY 0

typedef struct{
	const char * optArray[OPTION_QTY];
}parserData;

bool parseCallback(char *key, char *value, void * parameters); //La function que parsea el input recibido 
void parserInit(parserData parser); //La funci

static bool checkValues(char * key, char * value, void * parameters);
static char* strlower(char str[]);