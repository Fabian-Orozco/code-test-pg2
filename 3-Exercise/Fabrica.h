#ifndef FABRICAB95690
#define FABRICAB95690

template < class T >
class Fabrica{
    public:
        T * producir(){ //produce  un elemento de tipo T
            return new T; //(crea y devuelve la instancia del elemento)
        }
};
#endif