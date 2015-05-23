/*
 * Lista.cpp
 *
 *  Created on: 20/5/2015
 *      Author: Diego
 */
#include "stdafx.h"
#include "Lista.h"

Lista::Lista() {

	primero = NULL;
	ultimo = NULL;

}

Lista::~Lista() {

}

void Lista::insertarElemento(ElementoLista* actual) {

	if (primero == NULL) {
		primero = actual;
	} else {
		insertarElementoRec(primero, actual);
	}
}

void Lista::insertarElementoRec(ElementoLista* actual,
		ElementoLista* insertar) {

	if (actual->siguiente != NULL) {
		insertarElementoRec(actual->siguiente, insertar);
	} else {
		actual->siguiente = insertar;
		insertar->anterior = actual;
	}

}

ostream & operator<<(ostream & out, Lista & l) {
	l.imprimir(l.primero, out);
	return out;
}

void Lista::ordenar(ElementoLista*) {
}

void Lista::imprimir(ElementoLista* nodo, ostream& out) {
	if (nodo != NULL) {
		out << *nodo << endl;
		imprimir(nodo->siguiente, out);
	}

}

