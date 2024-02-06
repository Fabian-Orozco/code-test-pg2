#include "Fabrica.h"
#include "Transformador.h"
#include "Aumentador.h"
#include "Reductor.h"
#include "Invertidor.h"
#include <string>
#include <iostream>
using namespace std;

// Salida esperada:
// Entra: AbCd Sale: ABCD
// Entra: AbCd Sale: dCbA
// Entra: AbCd Sale: abcd

int main(){
    string original = "AbCd";
    
    Transformador * transformador[3];
    Fabrica<Aumentador> f1;
    Fabrica<Invertidor> f2;
    Fabrica<Reductor> f3;

    transformador[0]= f1.producir();
    transformador[1]= f2.producir();
    transformador[2]= f3.producir();

    for( int i=0; i < 3; ++i){
        cout << "Entra: " << original << " ";
        cout << "Sale: " << transformador[i]->transformar(original) << endl;
        delete transformador[i];
    }
    return 0;
}