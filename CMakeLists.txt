# Especificação mínima requerida para o CMake
cmake_minimum_required(VERSION 3.23.0)

# Configurações para o compilador
if (UNIX)
    set(CMAKE_CXX_FLAGS "-W -Wall -pedantic")   # Flags
endif()
set(CMAKE_CXX_STANDARD 11)                      # Versão da linguagem

# Nome do projeto
project(par VERSION 1.0 LANGUAGES CXX)

# Variáveis para diretórios
set(INCLUDE_DIR ${CMAKE_SOURCE_DIR}/include)
set(SRC_DIR ${CMAKE_SOURCE_DIR}/src)

# Especificação do executável e dependência principal
set(PROG "par")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${BIN_DIR})
add_executable(${PROG} ${SRC_DIR}/main.cpp)

# Diretório com arquivos cabeçalho
target_include_directories(${PROG} PUBLIC ${INCLUDE_DIR})

# Arquivos fonte como dependências
target_sources(${PROG} PUBLIC ${SRC_DIR}/main.cpp)