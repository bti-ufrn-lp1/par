/**
 * @file    par.h
 * @brief   Definição do <i>template</i> de classe Par
 * @author  Everton Cavalcante (everton.cavalcante@ufrn.br)
 * @since   18/05/2022
 * @date    21/05/2022
 */

#ifndef PAR_H
#define PAR_H

#include <ostream>
using std::ostream;

#include <string>
using std::string;

/**
 * @class Par par.h "include/par.h"
 * @brief Classe que representa um par genérico de dois elementos
 * @tparam T Tipo genérico
 */
template <class T>
class Par {
    private:
    
    /** @brief Primeiro elemento do par ordenado */
    T primeiro;

    /** @brief Segundo elemento do par ordenado */
    T segundo;

    public:

    /** @brief Construtor padrão */
    Par();

    /**
     * @brief Construtor parametrizado
     * @param a Primeiro elemento
     * @param b Segundo elemento
     */
    Par(T a, T b);

    /**
     * @brief Retorna o primeiro elemento do par
     * @return Primeiro elemento (genérico) do par
     */
    T getPrimeiro();

    /**
     * @brief Modifica o primeiro elemento do par
     * @param a Elemento a ser atribuído
     */
    void setPrimeiro(T a);

    /**
     * @brief Retorna o segundo elemento do par
     * @return Segundo elemento (genérico) do par
     */
    T getSegundo();

    /**
     * @brief Modifica o segundo elemento do par
     * @param b Elemento a ser atribuído
     */
    void setSegundo(T b);

    /**
     * @brief Sobrecarga do operador de inserção de <i>stream</i>
     * @details Imprime um par no formato <code>(a, b)</code>
     * @tparam U Tipo genérico (nome diferente por questões de ligação de tipos)
     * @param o Referência para o <i>stream</i> de saída
     * @param t Objeto da classe <code>Par</code> cujos elementos serão impressos
     * @return Referência para o <i>stream</i> de saída
     */
    template<class U>
    friend ostream& operator<<(ostream& o, Par<U> p);
};


/**
 * @class Par par.h "include/par.h"
 * @brief Especialização da classe <code>Par</code> para o tipo string
 */
template<>
class Par<string> {
    private:
    
    /** @brief Primeiro elemento do par ordenado */
    string primeiro;

    /** @brief Segundo elemento do par ordenado */
    string segundo;

    public:

    /**
     * @brief Construtor parametrizado
     * @param a Primeiro elemento
     * @param b Segundo elemento
     */
    Par(string a, string b);

    /**
     * @brief Retorna o primeiro elemento do par
     * @return Primeira string do par
     */
    string getPrimeiro();

    /**
     * @brief Modifica o primeiro elemento do par
     * @param a String a ser atribuída
     */
    void setPrimeiro(string a);

    /**
     * @brief Retorna o segundo elemento do par
     * @return Segunda string do par
     */
    string getSegundo();

    /**
     * @brief Modifica o segundo elemento do par
     * @param b String a ser atribuída
     */
    void setSegundo(string b);

    /**
     * @brief Sobrecarga do operador de inserção de <i>stream</i>
     * @details Imprime um par no formato <code>(a, b)</code>
     * @param o Referência para o <i>stream</i> de saída
     * @param t Objeto da classe <code>Par</code> cujos elementos serão impressos
     * @return Referência para o <i>stream</i> de saída
     */
    friend ostream& operator<<(ostream& o, Par<string> p);
};

#include "par.cpp"
#endif