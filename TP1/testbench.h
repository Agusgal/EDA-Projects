//
// Created by Grupo 3 on 8/03/2021.
//
// Archivo de testbench, para agregar casos se agregan arreglos de strings y la corrspondiente cantidad de argumentos
//

#ifndef EDA_TP1_TESTBENCH_H
#define EDA_TP1_TESTBENCH_H

#include <stdio.h>
#include <stdlib.h>

#define TESTS 8


char* t1[] = {"file_exe","-Robert_Jordan", "The_Eye_of_the_World", "The_Way_of_Kings", NULL};
const int argc1 = 4;

char* t2[]  ={"file_exe", "-Brandon_Sanderson", "Mistborn", "-Robert_Jordan", NULL};
const int argc2 = 4;

char* t3[] = {"file_exe", "-Brandon_Sanderson", "-Mistborn"};
const int argc3 = 3;

char* t4[] = {"file_exe"};
const int argc4 = 1;

char* t5[]  ={"file_exe", "-Stephen_King", "It", NULL};
const int argc5 = 3;

char* t6[]  ={"file_exe", "-Brandon_Sanderso", "It", NULL};
const int argc6 = 3;

char* t7[] = {"file_exe","-Robert_Jordan", "The_Eye_of_the_World", "The_Way_of_Kings", "-Robert_Jordan", "The_Great_Hunt", "-J_K_Rowling", "Harry_Potter", "-N_K_Jemisin", "The_Fifth_Season", NULL};
const int argc7 = 10;

char* t8[] = {"file_exe","-Robert_Jordan", "The_Eye_of_the_World", "The_Way_of_Kings", "-Robert_Jordan", "The_Great_Hunt", "-Robert_Jordan", "A_Memory_of_Light", "-Brandon_Sanderson", "Oathbringer", NULL};
const int argc8 = 10;

char **tests[TESTS] = {t1, t2, t3, t4, t5, t6, t7, t8};
int testn[] =  {argc1, argc2, argc3, argc4, argc5, argc6, argc7, argc8};


#endif //EDA_TP1_TESTBENCH_H
