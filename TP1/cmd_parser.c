//
// Created by Grupo 3 on 08/03/2021.
//
#include "cmd_parser.h"



int parseCmdLine(int argc, char *argv[], pCallback p, void *userData)
{
    int argument_n = 0;
    char * param, *value;
    bool no_error;


    for(int i = 0; i < argc; i++)
    {
        param = argv[i];

        if (param[0] == '-')
        {
            if (param[1] != '\0')
            {
                argument_n++;
                value = argv[++i];
                if (value == NULL)
                {
                    no_error = false;
                }
                else
                {
                    no_error = p(param + 1, value, userData);
                }
            }
            else
            {
                no_error = false;
            }
        }
        else
        {
            argument_n++;
            no_error = p(NULL, param, userData);
        }

        if(!no_error)
        {
            return -1;
        }
    }

    return argument_n - 1;
}
