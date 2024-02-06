#include "Repartidor.h"

int main(){
    cout << endl;
    Repartidor * rep1 = new Repartidor();

    rep1->genereFichas();
    cout << "Antes de revolver" << endl;
    cout << *rep1 << endl;

    rep1->randomize();
    cout << "\nDespues de revolver:" << endl;
    cout << *rep1 << endl;

    cout << "\nCreando mazos de fichas con 7 fichas sobrantes en cola" << endl << endl;
    rep1->genereGrupos();

    int numJugador = -1;
    do{
        cout << "Digite su numero de jugador: ";
        cin >> numJugador;
    }while(numJugador > 2 || numJugador < 0);
    
    cout << "Fichas de jugador " << numJugador << ":  ";
    rep1->imprimirGrupo(numJugador);

    cout << "\n\nExtrayendo de cola de fichas sobrantes:" << endl;
    rep1->extraerCola();
    
    cout << endl;
    delete rep1;
    return 0;
}