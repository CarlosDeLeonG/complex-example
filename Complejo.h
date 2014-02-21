/* 
 * File:   Complejo.h
 * Author: Equipo
 *
 * Created on 21 de febrero de 2014, 11:40 AM
 */

#ifndef COMPLEJO_H
#define	COMPLEJO_H

#include <iostream>

class Complejo {
public:
    // Construtores...
    Complejo();
    Complejo(const Complejo& orig);
    Complejo(double, double im = 0.0);
    // Setters...
    void setData();
    void setReal(double);
    void setImag(double);
    // Getters...
    double getReal(){return real;}
    double getImag(){return imag;}
    // Sobrecarga de operadores aritméticos...
    Complejo operator+ (const Complejo&);
    Complejo operator- (const Complejo&);
    Complejo operator* (const Complejo&);
    Complejo operator/ (const Complejo&);
    // Sobrecarga del operador de asignación...
    Complejo& operator= (const Complejo&);
    // Sobrecarga de operadores de comparación...
    friend int operator== (const Complejo&, const Complejo&);
    friend int operator!= (const Complejo&, const Complejo&);
    // Sobrecarga del operador de inserción en el flujo de salida...
    friend std::ostream& operator<< (std::ostream&, const Complejo&);
    virtual ~Complejo();
private:
    double real;
    double imag;
};

#endif	/* COMPLEJO_H */

