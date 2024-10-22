#pragma once
#include "Node.h"
class lista
{
private: 
	Node* first; 
public:
	lista(); 
	~lista(); 
	bool buscarEstudiante(string ); 
	void insertarAlFinal(Estudiante *); 
	void copiaLista(lista&); 
	void eliminaNoActivos();
	string toStringList();
};

