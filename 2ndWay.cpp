#include <iostream>

using namespace std;

//FUNCION QUE RECIBE EL PARÁMETRO numRecibido
int contarCaracteres(unsigned int numRecibido){
    //CONTADOR DE DIGITOS
    int contador = 0;
    //BUCLE DO WHILE : MIENTRAS EL numRecibido EXISTA (MAYOR QUE 0) ESTARA EN FUNCIONAMIENTO..
    do {
        //CADA VEZ QUE SE ENTRA EN EL BUCLE, SUBEN LOS DIGITOS POR LO TANTO, CONTADOR SUBE
         contador++;
        //PARA EVITAR BUCLE INFINO, EL NUMERO RECIBIDO SE DIVIDE ENTRE SU BASE (10) DE ESTA FORMA BAJAMOS DIGITOS
         numRecibido /= 10;
        //EL BUCLE FINALIZA CUANDO EL NUMERO ES COMPLETADO ( 0 )
    } while (numRecibido);

    //LA FUNCION contarCaracteres DEVUELVE CONTADOR
    return contador;
}

int main(){
    //MOSTRAMOS POR PANTALLA LA FUNCION contarCaracteres que recibe como parámetros UNSIGNED INT , en este caso 2001
    cout << contarCaracteres(2001);
    return 0;
}
