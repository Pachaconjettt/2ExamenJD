#pragma once
#include "Cliente.h"
class Reservacion
{
private:
	int precio;
	int numFila; 
	int numColumna; 
	Cliente* elCliente; 
public:
	Reservacion(); 
	Reservacion(int, int, int, Cliente*);
	void setPrecio(int);
	void setNumFila(int);
	void setNumColumna(int); 
	void setCliente(Cliente*); 
	int getPrice(); 
	int getNumFila();
	int getNumColumna();
	Cliente* getCliente();
	float calcularMontoDescuento();
	string toString();
};

