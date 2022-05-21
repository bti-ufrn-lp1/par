/**
 * @file    par.cpp
 * @brief   Implementação da classe Par
 * @author  Everton Cavalcante (everton.cavalcante@ufrn.br)
 * @since   18/05/2022
 * @date    21/05/2022
 * @sa      par.h
 */

#include <cstdlib>
using std::exit;

#include <iostream>
using std::cerr;
using std::endl;

#include "par.h"

/**
 * @brief Construtor padrão
 * @tparam T Tipo genérico
 */
template <class T>
Par<T>::Par() {
    // Vazio
}

/**
 * @brief Construtor parametrizado
 * @tparam T Tipo genérico
 * @param a Primeiro elemento
 * @param b Segundo elemento
 */
template <class T>
Par<T>::Par(T a, T b) {
    primeiro = a;
    segundo = b;
}

/**
 * @brief Retorna o primeiro elemento do par
 * @tparam T Tipo genérico
 * @return Primeiro elemento (genérico) do par
 */
template <class T>
T Par<T>::getPrimeiro() {
    return primeiro;
}

/**
 * @brief Modifica o primeiro elemento do par
 * @tparam T Tipo genérico
 * @param a Elemento a ser atribuído
 */
template <class T>
void Par<T>::setPrimeiro(T a) {
    primeiro = a;
}

/**
 * @brief Retorna o segundo elemento do par
 * @tparam T Tipo genérico
 * @return Segundo elemento (genérico) do par
 */
template <class T>
T Par<T>::getSegundo() {
    return segundo;
}

/**
 * @brief Modifica o segundo elemento do par
 * @tparam T Tipo genérico
 * @param b Elemento a ser atribuído
 */
template <class T>
void Par<T>::setSegundo(T b) {
    segundo = b;
}

/**
 * @brief Sobrecarga do operador de inserção de <i>stream</i>
 * @details Imprime um par no formato <code>(a, b)</code>
 * @tparam T Tipo genérico
 * @param o Referência para o <i>stream</i> de saída
 * @param t Objeto da classe <code>Par</code> cujos elementos serão impressos
 * @return Referência para o <i>stream</i> de saída
 */
template <class T>
ostream& operator<<(ostream& o, Par<T> p) {
    o << "(" << p.getPrimeiro() << ", " << p.getSegundo() << ")";
    return o;
}

/**
 * @brief Construtor parametrizado específico para o tipo string
 * @param a Primeiro elemento
 * @param b Segundo elemento
 */
Par<string>::Par(string a, string b) {
    if (a.empty() || b.empty()) {
        cerr << "Argumentos inválidos" << endl;
        exit(1);
    } else {
        primeiro = a;
        segundo = b;
    }
}

/**
 * @brief Retorna o primeiro elemento do par
 * @return Primeira string do par
 */
string Par<string>::getPrimeiro() {
    return primeiro;
}

/**
 * @brief Modifica o primeiro elemento do par
 * @param a String a ser atribuída
 */
void Par<string>::setPrimeiro(string a) {
    primeiro = a;
}

/**
 * @brief Retorna o segundo elemento do par
 * @return Segunda string do par
 */
string Par<string>::getSegundo() {
    return segundo;
}

/**
 * @brief Modifica o segundo elemento do par
 * @param b String a ser atribuída
 */
void Par<string>::setSegundo(string b) {
    segundo = b;
}

/**
 * @brief Sobrecarga do operador de inserção de <i>stream</i>
 * @details Imprime um par no formato <code>(a, b)</code>
 * @param o Referência para o <i>stream</i> de saída
 * @param t Objeto da classe <code>Par</code> cujos elementos serão impressos
 * @return Referência para o <i>stream</i> de saída
 */
ostream& operator<<(ostream& o, Par<string> p) {
    o << "(" << p.getPrimeiro() << ", " << p.getSegundo() << ")";
    return o;
}