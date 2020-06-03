#include <iostream>
#include "Vect.hpp"
#include "../Factory/Fabric.h"
#include "VectVert.hpp"

int CStringVert::output(){
    FILE *file = fopen(filename, "w");
    int i = 0;
    while(data[i] != '\0'){
        while(data[i] != ' ' && data[i] != '\0'){
            fprintf(file, "%c", data[i]);
            i++;
        }
        if(data[i] == '\0')
            break;
        fprintf(file, "\n");
        i++;
    }
    fclose(file);
    return 0;
}
