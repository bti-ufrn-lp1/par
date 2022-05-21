/**
 * @file    main.cpp
 * @brief   Implementação do programa principal
 * @author  Everton Cavalcante (everton.cavalcante@ufrn.br)
 * @since   18/05/2022
 * @date    21/05/2022
 */

#include <iostream>
using std::cout;
using std::endl;

#include <string>
using std::string;

#include "parnomeado.h"

/** @brief Função principal */
int main() {
    Par<int> p(1, 2);
    cout << p << endl;

    Par<string> q("X", "Y");
    cout << q << endl;
    
    ParNomeado<int> r("Meu par", 3, 4);
    cout << r << endl;

    return 0;
}