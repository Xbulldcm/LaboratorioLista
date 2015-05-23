/*
 * ElementoPersona.h
 *
 *  Created on: May 8, 2015
 *      Author: b11555
 */

#ifndef ELEMENTOPERSONA_H_
#define ELEMENTOPERSONA_H_

#include "Elemento.h"
#include "Persona.h"


using namespace std;

class ElementoPersona : public Elemento{

public:
	Persona * p;

	int compareTo(Elemento *);
	void imprimir(ostream &) const;
	ElementoPersona(Persona*);
	virtual ~ElementoPersona();
};

#endif /* ELEMENTOPERSONA_H_ */
