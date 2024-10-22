#pragma once
#include "Reservacion.h"
#include <iomanip>
class Coleccion_Matriz
{
private:
	Reservacion*** m;
	int tam;
public:
	Coleccion_Matriz();
	virtual ~Coleccion_Matriz();
	void reservaIndividual(int, int, Cliente*);
	bool disponibleFila(int, int);
	void reservaMultiple(Cliente* , int );
	int ingresoTaquilla(); 
	void corrimientoFila(int f); 
	string toString(); 
};

