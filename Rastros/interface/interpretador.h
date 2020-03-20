//
// Created by tiago on 19/03/20.
//
/**
@file interpretador.h
Funçao que interpreta os comandos
*/
#ifndef PROJETO_INTERPRETADOR_H
#define PROJETO_INTERPRETADOR_H
#include <stdio.h>
#include "../dados/muda_estado.h"
/**
 * \brief Interpreta os comandos enviados pelo utilizador e chama a função necessaria.
 * @param e Apontador para estado.\n
 * @return 1 se o comando for valido e 0 se for invalido.
 */
int interpretador(ESTADO *e);
#endif //PROJETO_INTERPRETADOR_H