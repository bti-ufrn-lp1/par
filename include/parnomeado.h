/**
 * @file    parnomeado.h
 * @brief   Definição do <i>template</i> de classe ParNomeado
 * @details A instanciação desta classe é feita a partir do <i>template</i> de 
 *          classe <code>Par</code>
 * @author  Everton Cavalcante (everton.cavalcante@ufrn.br)
 * @since   18/05/2022
 * @date    21/05/2022
 * @sa      par.h
 */

#ifndef PAR_NOMEADO_H
#define PAR_NOMEADO_H

#include <string>
using std::string;

#include "par.h"

/**
 * @class ParNomeado parnomeado.h "include/parnomeado.h"
 * @brief Classe que representa um par nomeado genérico de dois elementos
 * @tparam T Tipo genérico
 */
template <class T>
class ParNomeado {
    private:

    /** Nome para o par */
    string nome;

    /**
     * @brief Elementos do par
     * @sa par.h
     */
    Par<T> elementos;

    public:

    /** @brief Construtor padrão */
    ParNomeado();
    
    /**
     * @brief Construtor parametrizado
     * @param n Nome para o par
     * @param a Primeiro elemento do par
     * @param b Segundo elemento do par
     */
    ParNomeado(string n, T a, T b);

    /**
     * @brief Retorna o nome do par
     * @return Nome do par
     */
    string getNome();

    /**
     * @brief Modifica o nome do par
     * @param n Nome a ser atribuído ao par
     */
    void setNome(string n);

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
     * @details Imprime um par nomeado no formato <code>N: (a, b)</code>
     * @tparam U Tipo genérico (nome diferente por questão de ligação de tipos)
     * @param o Referência para o <i>stream</i> de saída
     * @param t Objeto da classe <code>ParNomeado</code> cujos elementos serão 
     *          impressos
     * @return Referência para o <i>stream</i> de saída
     */
    template <class U>
    friend ostream& operator<<(ostream& o, ParNomeado<U> p);
};

#include "parnomeado.cpp"
#endif