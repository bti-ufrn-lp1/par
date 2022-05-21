/**
 * @file    parnomeado.cpp
 * @brief   Implementação da classe ParNomeado
 * @author  Everton Cavalcante (everton.cavalcante@ufrn.br)
 * @since   18/05/2022
 * @date    21/05/2022
 * @sa      parnomeado.h
 */

#include "par.h"
#include "parnomeado.h"

/**
 * @brief Construtor padrão
 * @tparam T Tipo genérico
 */
template<class T>
ParNomeado<T>::ParNomeado() {
    // Vazio
}

/**
 * @brief Construtor parametrizado
 * @tparam T Tipo genérico
 * @param n Nome para o par
 * @param a Primeiro elemento do par
 * @param b Segundo elemento do par
 */
template<class T>
ParNomeado<T>::ParNomeado(string n, T a, T b) {
    nome = n;
    elementos = Par<T>(a, b);
}

/**
 * @brief Retorna o nome do par
 * @tparam T Tipo genérico
 * @return Nome do par
 */
template <class T>
string ParNomeado<T>::getNome() {
    return nome;
}

/**
 * @brief Modifica o nome do par
 * @tparam T Tipo genérico
 * @param n Nome a ser atribuído ao par
 */
template <class T>
void ParNomeado<T>::setNome(string n) {
    nome = n;
}

/**
 * @brief Retorna o primeiro elemento do par
 * @tparam T Tipo genérico
 * @return Primeiro elemento (genérico) do par
 */
template <class T>
T ParNomeado<T>::getPrimeiro() {
    return elementos.getPrimeiro();
}

/**
 * @brief Modifica o primeiro elemento do par
 * @tparam T Tipo genérico
 * @param a Elemento a ser atribuído
 */
template <class T>
void ParNomeado<T>::setPrimeiro(T a) {
    elementos.setPrimeiro(a);
}

/**
 * @brief Retorna o segundo elemento do par
 * @tparam T Tipo genérico
 * @return Segundo elemento (genérico) do par
 */
template <class T>
T ParNomeado<T>::getSegundo() {
    return elementos.getSegundo();
}

/**
 * @brief Modifica o segundo elemento do par
 * @tparam T Tipo genérico
 * @param b Elemento a ser atribuído
 */
template <class T>
void ParNomeado<T>::setSegundo(T b) {
    elementos.setSegundo(b);
}

/**
 * @brief Sobrecarga do operador de inserção de <i>stream</i>
 * @details Imprime um par nomeado no formato <code>N: (a, b)</code>
 * @tparam T Tipo genérico
 * @param o Referência para o <i>stream</i> de saída
 * @param t Objeto da classe <code>ParNomeado</code> cujos elementos serão impressos
 * @return Referência para o <i>stream</i> de saída
 */
template <class T>
ostream& operator<<(ostream& o, ParNomeado<T> p) {
    o << p.getNome() << ": (" << p.getPrimeiro() << ", " << p.getSegundo() << ")";
    return o;
}