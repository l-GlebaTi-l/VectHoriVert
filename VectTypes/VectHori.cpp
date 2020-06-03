#include <iostream>
#include "Vect.hpp"
#include "../Factory/Fabric.h"
#include "VectHori.hpp"

int CStringHori::output()
{
    FILE *file = fopen(filename, "w");
    int i = 0;
    while(data[i] != '\0'){
        fprintf(file, "%c", data[i]);
        i++;
    }
    fclose(file);
    return 0;
}
