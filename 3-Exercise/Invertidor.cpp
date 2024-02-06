#include "Invertidor.h"

/**
 * @brief Metodo que invierte las letras de una hilera pasada por parámetro y retorna una copia de ella.
 * @param hilera recibe un string, del cual se le hará una copia al cual se aplicará la transformación.
 * @return copia string, devuelve una copia con la transformación ya realizada.
 */
string Invertidor::transformar(string hilera){
    string copia = "";
    int letras = hilera.length()-1;
    for(int i = letras; i >= 0; --i){
        copia += hilera[i];
    }
    return copia;
}