/*
 * Lista.cpp
 *
 *  Created on: 20/5/2015
 *      Author: Diego
 */
#include "stdafx.h"
#include "Lista.h"
#include "ElementoLista.h"

Lista::Lista() {
	cantidadElementos = 0;
	primero = NULL;
	ultimo = NULL;

}

Lista::~Lista() {

}

void Lista::insertarElemento(ElementoLista* actual) {
	int p = 0;
	if (primero == NULL) {
		primero = actual;
		ultimo = actual;
		actual->posicion = p;
		cantidadElementos++;
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
		ultimo = insertar;
		cantidadElementos++;
	}

}

void Lista::insertarInicio(ElementoLista* actual) {

	if (primero == NULL) {
		primero = actual;
		ultimo = actual;
		cantidadElementos++;
	}
	else {
		insertarInicioRec(primero, actual);
	}

	ordenarPosiciones(primero, 0);
}

void Lista::insertarInicioRec(ElementoLista* actual,
	ElementoLista* insertar) {

	if (actual->anterior != NULL) {

		insertarInicioRec(actual->anterior, insertar);
	}
	else {
		actual->anterior = insertar;
		insertar->siguiente = actual;
		primero = insertar;
		cantidadElementos++;
	}

}

ostream & operator<<(ostream & out, Lista & l) {
	l.imprimir(l.primero, out);
	return out;
}


void Lista::imprimir(ElementoLista* nodo, ostream& out) {
	if (nodo != NULL) {
		out << *nodo << " Posicion: " << nodo->posicion<< endl;
		imprimir(nodo->siguiente, out);
	}

}

void Lista::ordenarPosiciones(ElementoLista* nodo, int p){

	nodo->posicion = p;

	if (nodo->siguiente != NULL){

		ordenarPosiciones(nodo->siguiente,p+1);

	}
	
}

void  Lista::eliminar(int posicion){
	if (primero != NULL){

		eliminarRec(primero,posicion);
	
	}

	ordenarPosiciones(primero, 0);
}

void Lista::eliminarRec(ElementoLista* actual, int p){
	if (actual->posicion != p){

		if (actual->siguiente != NULL){ 
			eliminarRec(actual->siguiente, p);
		}

	}
	else {

		if (p == 0){
			primero = actual->siguiente;
			actual->siguiente->anterior = NULL;

		}
		else {
			actual->anterior->siguiente = actual->siguiente;
			actual->siguiente->anterior = actual->anterior;
			cantidadElementos--;
		}
	}
}



