//
//  main.cpp
//  Ensayos-CL
//
//  Created by Carlos Pérez on 9/11/15.
//  Copyright © 2015 Carlos Pérez. All rights reserved.
//

#include <iostream>
#include "io.hpp"

int main(int argc, const char * argv[]) {
    
    int num1 = 0;
    int num2 = 0;
    
    std::cout << "Hola! " << std::endl;
    
    num1 = readNumber();

    num2 = readNumber();

    writeAnswer( num1 * num2 );
    
    std::cout << "Oreja !!!!!" << std::endl;
    
    return 0;
}
