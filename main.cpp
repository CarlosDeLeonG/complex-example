/* 
 * File:   main.cpp
 * Author: Equipo
 *
 * Created on 21 de febrero de 2014, 11:39 AM
 */

#include <cstdlib>

#include "Complejo.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    // Se crean dos complejos con el constructor general...
    Complejo c1(1.0, 1.0);
    Complejo c2(2.0, 2.0);
    
    // Se crea un complejo con el constructor por defecto...
    Complejo c3;
    
    c3.setReal(5.0);
    c3.setImag(2.0);
    
    Complejo c4(4.0);
    
    Complejo suma = c1 / c2;
    
    cout << c1 << " / " << c2 << " = " << c1 / c2 << std::endl;
    
    return 0;
}

