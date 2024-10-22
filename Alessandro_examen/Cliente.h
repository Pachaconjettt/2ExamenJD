#pragma once
#include <iostream>
#include <sstream>
#include <string>
#include <iomanip>

using namespace std;

class Cliente
{
private: 
	string nombre; 
	bool adultoMayor; 
	bool estudiante; 
public:
	Cliente(); 
	Cliente(string, bool, bool); 
	virtual ~Cliente(); 
	void setNombre(string);
	void setAdultoMayor(bool);
	void setEstudiante(bool); 
	string getNombre();
	bool getAdultoMayor();
	bool getEstudiante();
	string toString();
};

