/*
 * Persona.h
 *
 *  Created on: May 8, 2015
 *      Author: b11555
 */

#ifndef PERSONA_H_
#define PERSONA_H_

#include "Elemento.h"

using namespace std;

class Persona {
public:
	int ID;
	int edad;
	string nombre;
	Persona(int, string,int);
	virtual ~Persona();
	int compareTo(Elemento *);
	void imprimir(ostream &) const;
};

#endif /* PERSONA_H_ */
