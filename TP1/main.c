#include <stdio.h>
#include "cmd_parser.h"
#include "testbench.h"
#include <string.h>

int parseCallback(char *key, char *value, void *userData);

//Estructura del usuario
typedef struct{
    char* author;
    char* novel;
}Data;


int main(void)
{
    int result;

    Data test1_data[10];
    Data* data1p = test1_data;

    for(int i = 0; i < TESTS; i++)
    {
        result = parseCmdLine(testn[i], tests[i], parseCallback, &data1p);
        if(result != -1)
        {
            printf("Test %d successful!\nTotal arguments: %d\n\n", i+1, result);
        }
        else
        {
            printf("Test %d failed, Fatal Error!\n", i+1);
            printf("Códio de error: %d\n\n", result); //tipo de error especifico no implementado
        }
    }

    return 0;
}



int parseCallback(char *key, char *value, void *userData)
{
    int data_ok = 1;
    Data* data = *(Data**)userData;
    char *new_key;

    if(key != NULL)
    {
        new_key = key;
    }
    else
    {
        new_key = "";
    }
    char* new_value = value;

    if(key)
    {
        if(!strcmp(key, "Robert_Jordan")|!strcmp(key, "Brandon_Sanderson"))
        {
            data->author = new_key;
        }
        else
        {
            data_ok = 0;
        }
    }

    if(value)
    {
        data->novel = new_value;
    }
    else
    {
        data_ok = 0;
    }

    (*(Data**)userData)++;

    return data_ok;
}

