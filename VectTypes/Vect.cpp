#include <iostream>
#include "Vect.hpp"

CString::CString(char* Data)
{
    int i = 0;
    while(Data[i] != '.'){
        filename[i] = Data[i];
        i++;
    }
    filename[i] = '.';
    i++;
    while(Data[i] != ' '){
        filename[i] = Data[i];
        i++;
    }
    filename[i] = '\0';
    i++;

    int n = 0;
    while(Data[i] != '\0'){
        if(Data[i] == '\n' || Data[i] == '\r' || Data[i] == '\0'){
            data[n] = '\0';
            n++;
            break;
        }
        data[n] = Data[i];
        n++;
        i++;
    }
    data[n] = '\0';
}

CString::~CString()
{
    delete[] data;
    delete[] filename;
}
