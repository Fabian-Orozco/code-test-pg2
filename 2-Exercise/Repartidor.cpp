#include "Repartidor.h"
#include <algorithm>

//metodos de ficha
/**
 * @brief Constructor por omisión de Ficha.
 */
Repartidor::Ficha::Ficha(){
    valor[0] = 0;
    valor[1] = 0;
}

/**
 * @brief Constructor por parametros de Ficha. Inicializa el vector de los valores de la ficha.
 * @param valor1 entero que representa el valor del lado izquierdo de la ficha.
 * @param valor2 entero que representa el valor del lado derecho de la ficha.
 */
Repartidor::Ficha::Ficha(int valor1, int valor2){
    valor[0] = valor1;
    valor[1] = valor2;
}

/**
 * @brief Metodo imprimir que recibe un flujo de salida y retorna otro con los datos de la ficha.
 * @param salida recibe un flujo de salida.
 * @return ostream& devuelve un flujo de salida con los datos de la ficha.
 */
ostream& Repartidor::Ficha::imprimir(ostream& salida){
    salida << "[" << valor[0] << ":" << valor[1] << "]";
    return salida;
}

//metodos de repartidor

/**
 * @brief Constructor por omisión de Repartidor.
 */
Repartidor::Repartidor(){
}

/**
 * @brief Metodo que genera las fichas con valores que van de [0:0] hasta [6:6] sin repetirse ([1:2] es lo mismo que [2:1]).
 */
void Repartidor::genereFichas(){
    for (int i = 0; i < 7; ++i){
        for (int j = i; j < 7; ++j){
            //agrega al vector stock una nueva ficha con esos valores.
            stock.push_back(Ficha(i,j));
        }
    }
}

/**
 * @brief Metodo que revuelve las fichas en el stock (cambia de orden los elementoss del vector).
 */
void Repartidor::randomize(){
    random_shuffle(stock.begin(), stock.end());
}

/**
 * @brief Metodo imprimir que recibe un flujo de salida y retorna otro con los datos de la ficha.
 * @param salida recibe un flujo de salida.
 * @return ostream& devuelve un flujo de salida con los datos de la ficha.
 */
ostream& Repartidor::imprimirStock(ostream& salida){
    for(int i = 0; i < stock.size(); ++i){
        if(i % 7 == 0){
            salida << endl;
        }
        salida << stock[i] << "\t";
    }
    return salida;
}

/**
 * @brief Metodo que llena un vector a partir de otro (le otorga 7 de sus elementos (fichas)). Estos elementos se eliminan del stock.
 * @param vector recibe un vector por referencia que almacena fichas de la clase repartidor. Este se llenará con 7 fichas del vector stock.
 */
void Repartidor::lleneGrupo(vector<Repartidor::Ficha>& vector){
    for(int i=0; i < 7; ++i){
        vector.push_back( stock.back() );
        stock.pop_back();
    }
}

/**
 * @brief Metodo que genera a los 3 grupos de 7 fichas y guarda las 7 restantes en una cola (queue).
 */
void Repartidor::genereGrupos(){
    lleneGrupo(grupo0);
    lleneGrupo(grupo1);
    lleneGrupo(grupo2);
    
    while(stock.size()){
        fichasSobrantes.push(stock.back());
        stock.pop_back();
    }
    
}
/**
 * @brief Metodo que imprime un grupo dependiendo del entero pasado por parámetro.
 * @param numJugador entero que representa el mazo del jugador que se desea imprimir.
 */
void Repartidor::imprimirGrupo(int numJugador){
    vector<Repartidor::Ficha> * vPtr = 0;
    switch(numJugador){
        case 0: vPtr = &grupo0; break;
        case 1: vPtr = &grupo1; break;
        case 2: vPtr = &grupo2; break;
        default: break; //se imprime el del jugador 0 si se ingresa un caracter (ejemplo: .)

    }
    for(int i = 0; i < vPtr->size(); ++i){
        cout << ((*vPtr)[i]) << "\t";
    }
}

/**
 * @brief Metodo que imprime los datos de la cola mientras los popea.
 */
void Repartidor::extraerCola(){
    while(fichasSobrantes.size()){
        cout << fichasSobrantes.front() << "\t";
        fichasSobrantes.pop();
    }
}