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

	protected:
		ElementoLista * primero;
		ElementoLista * ultimo;


    public:
		int cantidadElementos;

		Lista();
		virtual ~Lista();

		void insertarInicio(ElementoLista*);
		void insertarElemento(ElementoLista *);
		void ordenarPosiciones(ElementoLista*, int);
		void eliminar(int);

	private:
		void eliminarRec(ElementoLista*, int);
		void insertarInicioRec(ElementoLista*,ElementoLista*);
		void insertarElementoRec(ElementoLista *, ElementoLista *);
		void imprimir(ElementoLista *, ostream &);
		

};

#endif /* LISTA_H_ */
