#pragma once
#include "Estudiante.h"
class Node
{
private: 
	Estudiante* theStudent; 
	Node* next; 
public: 
	Node(Estudiante*, Node*); 
	virtual ~Node(); 
	void setTheStudent(Estudiante*); 
	void setNext(Node*); 
	Estudiante* getStudent(); 
	Node* getNext(); 
	string toStringNode(); 
};

