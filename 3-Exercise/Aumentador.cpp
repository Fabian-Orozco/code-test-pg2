#include "Aumentador.h"

/**
 * @brief Metodo que convierte las letras de una hilera a mayúsculas. 
 * @param hilera recibe un string, del cual se le hará una copia al cual se aplicará la transformación.
 * @return copia string, devuelve una copia con la transformación ya realizada.
 */
string Aumentador::transformar(string hilera){
    string copia = hilera;
    for(int i=0; i < hilera.size(); ++i){
        if((int) hilera[i] >= 97 && (int) hilera[i] <= 122){
            copia[i] = hilera[i]-32;
        }
    }
    return copia;
}