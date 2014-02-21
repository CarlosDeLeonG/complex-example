/* 
 * File:   Complejo.cpp
 * Author: Equipo
 * 
 * Created on 21 de febrero de 2014, 11:40 AM
 */

#include "Complejo.h"
// Cosntructor por defecto
Complejo::Complejo() {
    //Complejo(0.0, 0.0);
    real = 0.0;
    imag = 0.0;
}

// Constructor general...
Complejo::Complejo(double re, double im){
    real = re;
    imag = im;
}

// Constructor de copia...
Complejo::Complejo(const Complejo& orig) {
    real = orig.real;
    imag = orig.imag;
}

// función miembro setData()
void Complejo::setData() {
    std::cout << "Teclee el valor real complejo: ";
    std::cin >> real;
    std::cout << "Introduzca el valor imaginario del complejo: ";
    std::cin >> imag;
}

void Complejo::setImag(double im) {
    imag = im;
}

void Complejo::setReal(double re) {
    real = re;
}

// Operador miembro +  sobrecargado...
Complejo Complejo::operator +(const Complejo& a) {
    Complejo suma;
    suma.real = real + a.real;
    suma.imag = imag + a.imag;
    return suma;
}

// Operador miembro -  sobrecargado...
Complejo Complejo::operator -(const Complejo& a) {
    Complejo resta;
    resta.real = real - a.real;
    resta.imag = imag - a.imag;
    return resta;
}

// Operador miembro * sobrecargado...
Complejo Complejo::operator *(const Complejo& a) {
    Complejo producto;
    producto.real = real * a.real - imag * a.imag;
    producto.imag = real * a.imag + a.real * imag;
    return producto;
}

// Operador miembro / sobrecargado...
Complejo Complejo::operator /(const Complejo& a) {
    Complejo cociente;
    double d = a.real * a.real + a.imag * a.imag;
    cociente.real = (real * a.real + imag * a.imag) / d;
    cociente.imag = (-real * a.imag + imag * a.real) / d;
    return cociente;
}

// Operador miembro de asignación sobrecargado...
Complejo& Complejo::operator =(const Complejo& a) {
    real = a.real;
    imag = a.imag;
    return (*this);
}

// Operador friend de test de igualdad sobrecargado...
int operator== (const Complejo& a, const Complejo& b) {
    if (a.real == b.real && a.imag == b.imag)
        return 1;
    return 0;
}

// Operador friend de test de desigualdad sobrecargado...
int operator!= (const Complejo& a, const Complejo& b) {
    if (a.real != b.real || a.imag != b.imag)
        return 1;
    return 0;
}

// Operador friend << sobrecargado...}
std::ostream& operator << (std::ostream& co, const Complejo& a){
    co << a.real;
    //long fl = co.setf(std::ios::showpos);
    std::ios_base::fmtflags fl = co.setf(std::ios::showpos);
    if (a.imag != 0.0)
        co << a.imag << "i";
    co.flags(fl);
    return co;
}

Complejo::~Complejo() {
}

