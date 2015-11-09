//
//  io.cpp
//  Ensayos-CL
//
//  Created by Carlos Pérez on 9/11/15.
//  Copyright © 2015 Carlos Pérez. All rights reserved.
//

#include <iostream>

int readNumber() {
    int numero = 0;
    
    std::cout << "Introduce un número: ";
    std::cin >> numero;
    return numero;
    
}

void writeAnswer(int resultado) {
    
    std::cout << "El resultado de la operación es: " << resultado << std::endl;
}