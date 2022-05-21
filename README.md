# Tempo

## Sobre
Este programa serve à demonstração do mecanismo de sobrecarga de operadores oferecido pela linguagem de programação C++ utilizando uma classe que representa um instante de tempo.

## Estrutura do projeto
Primando pela modularização, a definição e a implementação da classe `Tempo` está separada em um arquivo cabeçalho [`tempo.h`](include/tempo.h) e de corpo [`tempo.cpp`](src/tempo.cpp). O arquivo [`main.cpp`](src/main.cpp) correspondente à implementação da função principal do programa. Os arquivos deste projeto estão assim organizados de acordo com a seguinte estrutura:

```
+─tempo               ---> Nome do diretório do projeto
  ├─── CMakeLists.txt ---> Script de configuração do cmake
  ├─── Doxyfile       ---> Arquivo de configuração para geração de documentação com Doxygen
  ├─── build          ---> Diretório onde os arquivos executáveis serão gerados
  ├─── doc            ---> Diretório onde a documentação em HTML será gerada
  ├─── include        ---> Diretório que contém os arquivos cabeçalho (.h)
       └─── tempo.h   ---> Arquivo cabeçalho referente à definição da classe Tempo
  └─── src            ---> Diretório que contém os arquivos corpo (.cpp)
       └─── main.cpp  ---> Arquivo fonte contendo a implementação da função principal do programa
       └─── tempo.cpp ---> Arquivo fonte referente à implementação da classe Tempo
```

## Requisitos
Para a compilação e execução deste programa, os seguintes elementos devem estar devidamente instalados no ambiente de desenvolvimento:

- [Git](https://git-scm.com), como sistema de controle de versões
- [*GNU Compiler Collection*](https://gcc.gnu.org) (a qual inclui o compilador `g++`), [`clang`](https://clang.llvm.org/) ou qualquer outro compilador para a linguagem C++
- [`cmake`](https://cmake.org/), para gerar *makefiles* automaticamente e de forma otimizada para o projeto
- [Doxygen](https://www.doxygen.nl), para geração automática de documentação

## Download, compilação e execução do programa
No terminal do sistema operacional, insira os seguintes comandos para realizar o *download* da implementação a partir deste repositório Git e navegar para o diretório resultante:

```bash
 # Download da implementação a partir do repositório Git
 git clone https://github.com/bti-ufrn-lp1/tempo.git
 
 # Navegação para o diretório
 cd tempo
```
Caso se queira utilizar o *makefile* escrito manualmente, insira o seguinte comando no terminal do sistema operacional para compilar o programa:

Em seguida, insira os seguintes comandos no terminal do sistema operacional para gerar automaticamente o *makefile* e, em seguida, compilar o programa:

```bash
 # Criação do diretório build
 mkdir build
 cd build

 # Utilização do CMake para geração do Makefile
 cmake ..
 
 # Compilação e geração do executável do programa
 cmake --build .
```

Esses comandos irão gerar, além de um conjunto de arquivos e diretórios resultantes dos processos de compilação e ligação do programa, o arquivo executável do programa, ``tempo``, no diretório ``build``.

Finalmente, para executar o programa gerado, basta inserir o seguinte comando no terminal do sistema operacional (a partir do diretório `build`):

```bash
 ./tempo
```
Nesse caso, o programa irá requisitar os valores de horas, minutos e segundos para dois instantes de tempo e exibir na saída padrão o resultado da soma destes.
