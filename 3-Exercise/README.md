Compilar con: g++ *.cpp -o ejercicio3
Ejecutar con: ./ejercicio3

Cambios en correción (para hacer que funcione).

    Cambio el valor de retorno del método producir de la plantilla de Fabrica. (de Transformador a T).
    Retorno una instancia de tipo T para lograr que funcione el diseño planteado.
    
Cambios menores (por depuración):

    Cambio el macro de las constantes definidas para la precompilacion de invertidor ya que tenia un error de sintaxis leve.
    Cambio los métodos utilizados en cada tipo de transformador. (no utilizo stl por seguridad).
    Creo un destructor como virtual con implementacion vacía para que no dé errores el diseño a la hora de hacer delete.
