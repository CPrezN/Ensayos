//
//  main.cpp
//  Ensayos-CL
//
//  Created by Carlos Pérez on 9/11/15.
//  Copyright © 2015 Carlos Pérez. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    
    int num1 = 0;
    int num2 = 0;
    int result = 0;
    
    std::cout << "Hello, World!\n";
    
    std::cout << "Hola Carlos, introduce un número" << std::endl;
    std::cin >> num1;
    
    std::cout << "Ahora introduce otro número" << std::endl;
    std::cin >> num2;
    
    result = num1 + num2;
    std::cout << "El resultado de " << num1 <<" + " << num2 << " es: " << result << std::endl;
    std::cout << "Adios!!!" << std::endl;
    
    return 0;
}
