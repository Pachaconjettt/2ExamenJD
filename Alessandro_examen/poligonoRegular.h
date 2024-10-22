#pragma once
#include <iostream>
#include <sstream>
#include <string>

using namespace std;

class poligonoRegular
{
private:
	string nombre;
	float lado;
	float apotema;
public:
	poligonoRegular(string, float, float);
	virtual ~poligonoRegular();
	string getNombre();
	float getLado();
	float getApotema();
	void setNombre(string);
	void setLado(float);
	void setApotema(float);
	virtual float area();
	virtual float perimetro() = 0;
	virtual string toString() = 0;
};

