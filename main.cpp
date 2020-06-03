#include <iostream>
#include "VectTypes/Vect.hpp"
#include "Factory/Fabric.h"
#include "VectTypes/VectHori.hpp"
#include "VectTypes/VectVert.hpp"

CString *CreateData(char *str, CFabricData **f){
    return f[(int)(str[0] - 48)] -> Create(str + 2);
}

int main()
{
    FactoryCStringHori hori_ptr;
    FactoryCStringVert vert_ptr;

    CFabricData **ptrs = new CFabricData*[2];
    ptrs[0] = &hori_ptr;
    ptrs[1] = &vert_ptr;

    CString **Objects = new CString*[0];

    FILE* file = fopen("input.txt", "r");
    char a;
    char *data = new char[1024];
    int N = 0;
    while(fscanf(file, "%c", &a) != EOF){
        int i = 0;
        while(a != '\n' && a != '\r'){
//            data = (char*)realloc(data, (i+2)*sizeof(char));
            data[i] = a;
            i++;
            if(fscanf(file, "%c", &a) == EOF)
                break;
        }
        data[i] = '\0';
        Objects[N] = CreateData(data, ptrs);
        N++;
    }
    fclose(file);

    Objects[0][0] = Objects[0][0] + Objects[1][0] + Objects[2][0];

    for(int i = 0; i < N; i++){
        Objects[i] -> output();
    }

    delete[] data;
    for(int i = 0; i < N; i++)
        delete Objects[i]; //Почистили память

    return 0;
}
