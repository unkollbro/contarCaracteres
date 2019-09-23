#include <iostream>

using namespace std;

int contarCaracteres(unsigned int num){
    int digitos = 0;
    do {
         digitos++;
         num /= 10;
    } while (num);
    return digitos;
}

int main(){
    cout << contarCaracteres(7);
    return 0;
}
