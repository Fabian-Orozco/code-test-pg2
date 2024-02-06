#ifndef TRANSFORMADORB95690
#define TRANSFORMADORB95690

#include <string>
#include <iostream>
using namespace std;

class Transformador{
    public:
        virtual string transformar(string) = 0; //retorna una copia del string modificado
        virtual ~Transformador(){};
};
#endif