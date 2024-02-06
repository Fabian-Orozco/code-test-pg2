#include "Reductor.h"

/**
 * @brief Metodo que convierte las letras de una hilera a minúsculas. 
 * @param hilera recibe un string, del cual se le hará una copia al cual se aplicará la transformación.
 * @return copia string, devuelve una copia con la transformación ya realizada.
 */
string Reductor::transformar(string hilera){
    string copia = hilera;
    for(int i=0; i < hilera.size(); ++i){
        if((int) hilera[i] >= 65 && (int) hilera[i] <= 90){
            copia[i] = hilera[i]+32;
        }
    }
    return copia;
}