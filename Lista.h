/*
 * Lista.h
 *
 *  Created on: 20/5/2015
 *      Author: Diego
 */

#ifndef LISTA_H_
#define LISTA_H_

#include "ElementoLista.h"


using namespace std;

class Lista {
	friend ostream & operator<<(ostream &, Lista &);

	private:
		ElementoLista * primero;
		ElementoLista * ultimo;

	public:
		Lista();
		virtual ~Lista();

		void insertarElemento(ElementoLista *);
		void ordenar(ElementoLista*);

	private:
		void insertarElementoRec(ElementoLista *, ElementoLista *);
		void imprimir(ElementoLista *, ostream &);

};

#endif /* LISTA_H_ */
