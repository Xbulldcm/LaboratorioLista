/*
 * ElementoDouble.h
 *
 *  Created on: May 8, 2015
 *      Author: b11555
 */

#ifndef ELEMENTODOUBLE_H_
#define ELEMENTODOUBLE_H_

#include "Elemento.h"

using namespace std;

class ElementoDouble : public Elemento {

private:
	double d;
public:
	ElementoDouble(double d);
	~ElementoDouble();
	int compareTo(Elemento *);
	void imprimir(ostream &) const;
};

#endif /* ELEMENTODOUBLE_H_ */
