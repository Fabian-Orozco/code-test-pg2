#ifndef REPARTIDORB95690
#define REPARTIDORB95690

#include <iostream>
using namespace std;

#include <vector> 
#include <queue> 

class Repartidor{
    friend ostream& operator<<(ostream& salida, Repartidor& rep){
        return rep.imprimirStock(salida);
    }
    private:
        class Ficha{
            friend ostream& operator<<(ostream& salida, Ficha& ficha){
                return ficha.imprimir(salida);
            }
            private:
                int valor[2];
                ostream& imprimir(ostream&);

            public:
                Ficha();
                Ficha(int, int);
        };

        ostream& imprimirStock(ostream&);
        
        vector< Repartidor::Ficha > stock; //almacena las fichas del stock del repartidor cuando se generan y revuelven
        vector< Repartidor::Ficha > grupo0;
        vector< Repartidor::Ficha > grupo1;
        vector< Repartidor::Ficha > grupo2;
        queue< Repartidor::Ficha > fichasSobrantes; //cola de fichas sobrantes
    
    public:
        Repartidor();
        void genereFichas(); //llena el stock
        void randomize(); //revuelve el stock

        void lleneGrupo(vector<Repartidor::Ficha>&);
        void genereGrupos(); //genera 3 grupos con un identificador (0,1,2 para cada jugador) y 1 cola (de fichas sobrantes)        
        void imprimirGrupo(int); //imprime el grupo de fichas del # del jugador pasado por parámetro
        void extraerCola(); //imprime los datos de la cola en consola mientras los va popeando
};

#endif