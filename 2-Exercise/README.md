Compilar con: g++ *.cpp -o ejercicio2
Ejecutar con: ./ejercicio2

Cambios menores en correción (por depuración ya que anteriormente funcionaba correctamente).

    Cambio el nombre de algunas variables para que sea más lógico el programa.
    Elimino metodo getFicha() que no se utiliza.
    Cambio la cantidad de fichas que se imprimen por fila en consola (de 4 a 7).
    Utiliza un switch en lugar de condiciones if else para imprimir los grupos.
    Ahora se pide el numero de jugador por consola (anteriormente mostraba todos los mazos ordenados por número pero no pedía el dato).

Problemas/mejoras encontrados:

    Al ingresar el dato por consola si se inserta un caracter (no numérico), se imprime en consola el maso de fichas del jugador 0 de forma predeterminada.