/*
 * ElementoPersona.h
 *
 *  Created on: May 8, 2015
 *      Author: b11555
 */

#ifndef ELEMENTOPERSONA_H_
#define ELEMENTOPERSONA_H_

#include "ElementoLista.h"
#include "Persona.h"


using namespace std;

class ElementoPersona : public ElementoLista{

public:
	Persona * p;

	int compareTo(ElementoLista *);
	void imprimir(ostream &) const;
	ElementoPersona(Persona*);
	virtual ~ElementoPersona();
};

#endif /* ELEMENTOPERSONA_H_ */
