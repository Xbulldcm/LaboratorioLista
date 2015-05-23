/*
 * ElementoPersonaEdad.h
 *
 *  Created on: 18/5/2015
 *      Author: Diego
 */

#ifndef ELEMENTOPERSONAEDAD_H_
#define ELEMENTOPERSONAEDAD_H_

#include "Elemento.h"
#include "Persona.h"


using namespace std;

class ElementoPersonaEdad : public Elemento{

public:
	Persona * p;

	int compareTo(Elemento *);
	void imprimir(ostream &) const;
	ElementoPersonaEdad(Persona*);
	virtual ~ElementoPersonaEdad();
};

#endif /* ELEMENTOPERSONAEDAD_H_ */
