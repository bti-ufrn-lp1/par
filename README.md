# Par

## Sobre
Este programa serve à demonstração do uso de *templates* de classes na linguagem de programação C++ utilizando classes que representam pares ordenados. A classe `Par` representa um par ordenado de dois elementos genéricos e a classe `ParNomeado`, a qual faz uso da classe `Par`, representa um par ordenado (também genérico) com um nome.

## Estrutura do projeto
Primando pela modularização, a definição e a implementação das classes `Par` e `ParNomeado` está separada em arquivos cabeçalho [`par.h`](include/par.h) e [`parnomeado.h`](include/parnomeado.h) e de corpo [`par.cpp`](include/par.cpp) e [`parnomeado.cpp`](include/parnomeado.cpp). Devido ao uso de *template* de classes, esses arquivos cabeçalho e de corpo encontram-se no mesmo diretório, para maior portabilidade da implementação em não depender de caminhos relativos. Por sua vez, o arquivo [`main.cpp`](src/main.cpp) correspondente à implementação da função principal do programa. Os arquivos deste projeto estão assim organizados de acordo com a seguinte estrutura:

```
+─par                      ---> Nome do diretório do projeto
  ├─── CMakeLists.txt      ---> Script de configuração do cmake
  ├─── Doxyfile            ---> Arquivo de configuração para geração de documentação com Doxygen
  ├─── build               ---> Diretório onde os arquivos executáveis serão gerados
  ├─── doc                 ---> Diretório onde a documentação em HTML será gerada
  ├─── include             ---> Diretório que contém os arquivos cabeçalho (.h)
       └─── par.h          ---> Arquivo cabeçalho referente à definição do template de classe Par
       └─── par.cpp        ---> Arquivo fonte referente à implementação do template de classe Par
       └─── parnomeado.h   ---> Arquivo cabeçalho referente à definição do template de classe ParNomeado
       └─── parnomeado.cpp ---> Arquivo fonte referente à implementação do template de classe ParNomeado
  └─── src                 ---> Diretório que contém os arquivos corpo (.cpp)
       └─── main.cpp       ---> Arquivo fonte contendo a implementação da função principal do programa
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
 git clone https://github.com/bti-ufrn-lp1/par.git
 
 # Navegação para o diretório
 cd par
```

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

Esses comandos irão gerar, além de um conjunto de arquivos e diretórios resultantes dos processos de compilação e ligação do programa, o arquivo executável do programa, ``par``, no diretório ``build``.

Finalmente, para executar o programa gerado, basta inserir o seguinte comando no terminal do sistema operacional (a partir do diretório `build`):

```bash
 ./par
```
Nesse caso, o programa irá imprimir três pares ordenados definidos estaticamente no corpo do programa principal.
