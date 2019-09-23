#include <iostream>
#include <string>

using namespace std;

int main()
{
    int numIntroducido; //DECLARAMOS LA VARIABLE numIntroducido que contendra el numero introducido en INT
    cout << "introduce el numero" << endl; // TEXTO DE -- SE PIDE numIntroducido
    cin >> numIntroducido; // SE PIDE numIntroducido
    string numIntroducidoString =  to_string(numIntroducido); // Se convierte numIntroducido de int a String (texto)
    // Al pasarlo a string el numero anterior, podemos contar sus caracteres con facilidad utilizando .length().
    cout << "Numarul " << numIntroducido << " contine.." <<numIntroducidoString.length() << " cifre" << endl;
    return 0;
}
