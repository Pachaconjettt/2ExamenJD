#pragma once
#include "poligonoRegular.h"
class Triangulo_equilatero : public poligonoRegular 
{
private:
	int numDePuntas; 
public: 
	Triangulo_equilatero(string, float, float, int );
	virtual ~Triangulo_equilatero();
	float perimetro(); 
	string toString(); 
};

