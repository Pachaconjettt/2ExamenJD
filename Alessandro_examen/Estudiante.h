#pragma once
#include <iostream>
#include <sstream>
#include <string>

using namespace std;
class Estudiante
{
private: 
	string nombre; 
	string id; 
	string annioIngreso; 
	bool activo; 
	bool promedio; 
public:
	Estudiante();
	Estudiante(string, string, string, bool, bool);
	~Estudiante();
	void setNombre(string); 
	void setId(string); 
	void setAnnioIngreso(string);
	void setActivo(bool); 
	void setPromedio(bool);
	string getNombre();
	string getId(); 
	string getAnnio();
	bool getActivo();
	bool getPromedio(); 
	string toString(); 
};

