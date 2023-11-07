//
// Created by Grupo 3 on 07/03/2021.
//

#ifndef EDA_TP1_CMD_PARSER_H
#define EDA_TP1_CMD_PARSER_H

#include<stdio.h>
#include<stdbool.h>


typedef int (*pCallback) (char *, char*, void *);


//argc: cantidad de argumentos que recibe
//argv: valores de dichos argumentos
//pCallback: funcion de callback a ejecutar cuando se encuentra una opcion o un parametro
//userData: estructura que maneja el usuario
int parseCmdLine(int argc, char *argv[], pCallback p, void *userData);

#endif //EDA_TP1_CMD_PARSER_H
